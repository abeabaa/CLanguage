#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	printf("게임시작!");
	printf("환영합니다.♬");
	
	srand(time(NULL));
	int computerValue = rand() % 100+1;
	int userValue;
	int userValue1;
	printf("숫자를 입력하면 게임이 시작됩니다\n");
	scanf_s("%d", &userValue);
	if (userValue == computerValue) {
		printf("성공입니다.");
	}
	else if (userValue != computerValue) {
		printf("실패, 다시시도");
	}
	scanf_s("%d", &userValue1);

	if (userValue1 == computerValue) {
		printf("성공입니다.");
	}
	else if (userValue1 != computerValue) {
		printf("실패");
	}
	//printf("컴퓨터의 벨류는 %d 입니다.", computerValue);
	//printf("플레이어의 값은 %d 입니다.", userValue);

	//플레이어의 값과 컴퓨터값이 같으면 성공, 아니면 실패
	//실패시 다시시도

	return 0;
}