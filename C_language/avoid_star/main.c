#include <stdio.h>
#include "Console.h"
#include <stdbool.h>

int main() {
	//���� ũ�⸦ ����
	SetConsoleSize(30,30);
	//ĳ���͸� ����� �����δ�.
	//ĳ������ ��ġ��14,24��
	int x = 14, y = 28;
	int bx = 0; int by = 0;
	bool bullet = false;//�Ѿ��� �������� �ʾ����� false, �����Ǹ� true
	
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

			if (by < 1) bullet = false;
		}
#endif

		Sleep(20); //���� ���ڸ�ŭ ��ٷȴ� ����
	}

	return 0;
}