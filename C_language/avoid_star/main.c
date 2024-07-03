#include <stdio.h>
#include "Console.h"
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>

#define MAX 30//��ó����� MAX���ڿ� ���� 10���� ���� ġȯ�ϴ� �ڵ�(������ ������)

int main() {
	//���� ũ�⸦ ����
	SetConsoleSize(30,30);
	//ĳ���͸� ����� �����δ�.
	//ĳ������ ��ġ��14,24��
	int x = 14, y = 28;
	int bx = 0; int by = 0;
	bool bullet = false;//�Ѿ��� �������� �ʾ����� false, �����Ǹ� true

#if false//���� �Ѱ��� ������ �ڵ�
	int ex = 0, ey = 0;
	bool enemy = false;
#endif

	//�迭�� ���� �����ϴ� �ڵ�
	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	
	SetConsoleCursorVisibility(0);
	srand(time(NULL));

	while (1) {
		Clear();//������ġ�� ����� ���� �׸��� ���ؼ�
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
		printf("��");
#if true
		//�Ѿ˱���
		if (GetAsyncKeyState(VK_SPACE) & 8001) {
			if (!bullet) {  //!bullet�� bullet==false�� ����
				bx = x;
				by = y - 1;
				bullet = true;
			}
		}

		if (bullet) {
			by--;
			GotoXY(bx, by);
			printf("��");

			if (by < 0) bullet = false;
		}
#endif
#if false
		if (!enemy) {
			//(rand()%15) //rand() => 0~25947�������ڹ�ȯ%15�� ���ڸ� ��ȯ
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
				//(rand()%15) //rand() => 0~25947�������ڹ�ȯ%15�� ���ڸ� ��ȯ
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
				printf("��");
				ey[i]++;

				if (ey[i] > 28)
					enemy[i] = false;
			}
		}

		Sleep(100); //���� ���ڸ�ŭ ��ٷȴ� ����
	}

	return 0;
}