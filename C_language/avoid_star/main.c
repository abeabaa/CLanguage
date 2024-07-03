#include <stdio.h>
#include "Console.h"
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>

#define MAX 30//전처리기로 MAX숫자에 값을 10으로 전부 치환하는 코드(컴파일 시점에)

int main() {
	//맵의 크기를 정함
	SetConsoleSize(30,30);
	//캐릭터를 만들고 움직인다.
	//캐릭터의 위치를14,24로
	int x = 14, y = 28;
	int bx = 0; int by = 0;
	bool bullet = false;//총알이 생성되지 않았으면 false, 생성되면 true

#if false//별을 한개씩 떨구는 코드
	int ex = 0, ey = 0;
	bool enemy = false;
#endif

	//배열로 별을 생성하는 코드
	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	
	SetConsoleCursorVisibility(0);
	srand(time(NULL));

	while (1) {
		Clear();//이전위치를 지우고 새로 그리기 위해서
#if true
		if (GetAsyncKeyState(VK_LEFT) & 8001) {
			Clear();
			if (x < 1)x = 1;
			x--;
		}
		if (GetAsyncKeyState(VK_RIGHT) & 8001) {
			if (x>26)x = 26;
			Clear();
			x++;
		}
		if (GetAsyncKeyState(VK_UP) & 8001) {
			if (y < 0)y = 0;
			Clear();
			y --;
		}
		if (GetAsyncKeyState(VK_DOWN) & 8001) {
			if (y > 27)y = 27;
			Clear();
			y ++;
		}
#endif
		GotoXY(x, y);
		printf("♥");
#if true
		//총알구현
		if (GetAsyncKeyState(VK_SPACE) & 8001) {
			if (!bullet) {  //!bullet와 bullet==false는 같음
				bx = x;
				by = y - 1;
				bullet = true;
			}
		}

		if (bullet) {
			by--;
			GotoXY(bx, by);
			printf("○");

			if (by < 0) bullet = false;
		}
#endif
#if false
		if (!enemy) {
			//(rand()%15) //rand() => 0~25947랜덤숫자반환%15의 숫자를 반환
			ex = (rand() % 15)*2;
			ey = 0;
			enemy = true;
		}

		if (enemy) {
			GotoXY(ex, ey);
			printf("#");
			ey++;

			if (ey > 26) {
				enemy = false;
			}
		}
#endif
		for (int i = 0; i < MAX; i++) {
			if (!enemy[i]) {
				//(rand()%15) //rand() => 0~25947랜덤숫자반환%15의 숫자를 반환
				ex[i] = (rand() % 15) * 2;
				ey[i] = 0;
				enemy[i] = true;
				break;
			}
		}
		for (int i = 0; i < MAX; i++)
		{
			if (enemy[i])
			{
				GotoXY(ex[i], ey[i]);
				printf("☆");
				ey[i]++;

				if (ey[i] > 28)
					enemy[i] = false;
			}
		}

		Sleep(100); //안의 숫자만큼 기다렸다 실행
	}

	return 0;
}