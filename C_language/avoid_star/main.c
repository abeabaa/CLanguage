#include <stdio.h>
#include "Console.h"
#include <stdbool.h>

int main() {
	//맵의 크기를 정함
	SetConsoleSize(30,30);
	//캐릭터를 만들고 움직인다.
	//캐릭터의 위치를14,24로
	int x = 14, y = 28;
	int bx = 0; int by = 0;
	bool bullet = false;//총알이 생성되지 않았으면 false, 생성되면 true
	
	SetConsoleCursorVisibility(0);

	while (1) {
		Clear();
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
			printf("★");

			if (by < 1) bullet = false;
		}
#endif

		Sleep(20); //안의 숫자만큼 기다렸다 실행
	}

	return 0;
}