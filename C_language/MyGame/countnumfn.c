#include <stdio.h>
#include "countnumfn.h"
#include "windows.h"

void startnumberseeting();

void setopper();

int inputuservalue(); //무조건 실수할 것 같으니 주의



void gamewin() {
	printf("컴퓨터의 값과 일치함, 성공\n");
}

int fail(opper) {
	opper--;
	return opper;
}

void setcolor(unsigned char BGColor, unsigned char TextColor) {
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char ColorNum = (BGColor << 4) | TextColor;

}