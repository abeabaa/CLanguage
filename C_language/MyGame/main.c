#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	printf("게임시작!");
	printf("환영합니다.♬");
	
	//srand(time(NULL));
	//int computerValue = rand() % 100+1;
	int computerValue = 15;
	int opper=10;
	int userValue;
	//int userValue1;
	printf("숫자를 입력하면 게임이 시작됩니다\n");
	scanf_s("%d", &userValue);
	//gamewin함수 만들어보기 승리함수구현


	while (1) {
		if (computerValue == userValue) {
			printf("성공입니다.\n");
			break;
		}
		else {
			if (opper <= 0) {
				printf("게임종료");
				break;
			}
			opper--;
			printf("플레이어의 값을 다시 입력하세요\n");
			scanf_s("%d", &userValue);

		}
	}



	/*if (userValue == computerValue) {
		printf("성공입니다.\n");
	}
	else {
		while (opper != 0) {
			opper--;
			if (userValue == computerValue) {
				printf("성공입니다.\n");
				break;
			}
			if (userValue > computerValue) {
				printf("더 작습니다.\n");
			}
			else if (userValue < computerValue) {
				printf("더 큽니다.\n");
			}
			printf("다시 입력하세요.%d번 기회남음\n", opper);
			scanf_s("%d", &userValue);
			if (opper == 0) {
				printf("실패");
			}
		}
	}*/
	
	

	//printf("컴퓨터의 벨류는 %d 입니다.", computerValue);
	//printf("플레이어의 값은 %d 입니다.", userValue);

	//플레이어의 값과 컴퓨터값이 같으면 성공, 아니면 실패
	//실패시 다시시도

	return 0;
}