#include <stdio.h>
#include "countnumfn.h"
#include "windows.h"


int inputnumber() {
	int returnvalue;
	scanf_s("%d", &returnvalue);
}
void startgamesetting() {
	int opper = 10;
	printf("���ӽ���\n");//ctrl+r+r : ����Ǿ��ִ� ��� �Լ� �̸��� �ٲٴ� ����Ű
	printf("������ �Է��ϼ���\n");

}
int randomcomputervalue() {
	srand(time(NULL));
	int computerValue = rand() % 100+1;
}
int setopper() { //��ȸ�� ���ϴ� �Լ�
	printf("�÷��̾��� ü���� 10�Դϴ�.\n");
	int opper = 10;
	return opper;
}

void gamewin() {
	printf("��ǻ���� ���� ��ġ��, ����\n");
}

void gameover(int opper) {
	if (opper <= 0) {
		printf("��ȸ ����, ���ӿ���\n");
	}
}

int inputuservalue(int uservalue) { //������ ���� �޾ƿ�
	scanf_s("%d", &uservalue);
	return uservalue;
} //������ �Ǽ��� �� ������ ����

int fail(int opper) {// ���н� ��ȸ�� ����
	opper--;
	return opper;
}



void SetColor(unsigned char BGColor, unsigned char TextColor)
{
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char ColorNum = (BGColor << 4) | TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
}