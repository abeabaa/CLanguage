#include <stdio.h>
#include "countnumfn.h"
#include "windows.h"

void startnumberseeting();

void setopper();

int inputuservalue(); //������ �Ǽ��� �� ������ ����



void gamewin() {
	printf("��ǻ���� ���� ��ġ��, ����\n");
}

int fail(opper) {
	opper--;
	return opper;
}

void setcolor(unsigned char BGColor, unsigned char TextColor) {
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char ColorNum = (BGColor << 4) | TextColor;

}