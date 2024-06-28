#include <stdio.h>
#include "countnumfn.h"
#include "windows.h"


int inputnumber() {
	int returnvalue;
	scanf_s("%d", &returnvalue);
}
void startgamesetting() {
	int opper = 10;
	printf("게임시작\n");//ctrl+r+r : 연결되어있는 모든 함수 이름을 바꾸는 단축키
	printf("예상값을 입력하세요\n");

}
int randomcomputervalue() {
	srand(time(NULL));
	int computerValue = rand() % 100+1;
}
int setopper() { //기회를 정하는 함수
	printf("플레이어의 체력은 10입니다.\n");
	int opper = 10;
	return opper;
}

void gamewin() {
	printf("컴퓨터의 값과 일치함, 성공\n");
}

void gameover(int opper) {
	if (opper <= 0) {
		printf("기회 소진, 게임오버\n");
	}
}

int inputuservalue(int uservalue) { //유저의 값을 받아옴
	scanf_s("%d", &uservalue);
	return uservalue;
} //무조건 실수할 것 같으니 주의

int fail(int opper) {// 실패시 기회를 차감
	opper--;
	return opper;
}



void SetColor(unsigned char BGColor, unsigned char TextColor)
{
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char ColorNum = (BGColor << 4) | TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
}