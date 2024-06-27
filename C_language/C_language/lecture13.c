#include "lectures.h"

/*
* break, continue;에 대해서
* 반복문 조건문 제어해주는 방법임
* for,while,do while,switch에서 사용
*/

/*
break : 제어흐름에서 벗어나기 위해 사용
continue : 제어흐름을 유지한 채 해당 코드의 실행만 건너뛰는 기능
*/

/*

*/

void lecture13() {

	/*for (int i = 0; i < 10; i++) {
		printf("sfda\n");
		if (i == 7) {
			printf("i가 7일때 중단\n");
			break;
		}
	}*/


	/*int targetnum;
	int count = 0;
	scanf_s("%d", &targetnum);
	for (; ;) {
		count++;
		if (targetnum == count) {
			printf("작성한 수는 %d", count);
			break;
		}*/   //alt + shift + 마우스방향키	 또는		ctrl+ k+c와 ctrl+k+u 주석단축키
	
	/*int targetnum;
	int count = 0;
	scanf_s("%d", &targetnum);
	while (1) {
		count++;
		if (targetnum == count) {
			printf("작성한 수는 %d", count);
			break;
		}
	}*/

	//continue 사용예시
	/*int w_num = 0;
	while (w_num<10) {
		if (w_num % 2 != 0) {
			printf("패스된 w_num의 값 %d\n", w_num);
			continue;
		}
		printf("w_num의 값 %d\n", w_num);
		w_num++;
	}*///오ㅐ 무한반복?

	int dicenum;
	int mymoney=4;//마우스로 드래그 하고 알트+방향키
	printf("주사위 게임 예제");
	scanf_s("%d", &dicenum);
	while (1) {
		if (dicenum < 1 || dicenum>12) {
			printf("다시 입력하세요\n");
			scanf_s("%d", &dicenum);
		}
		else {
			if (dicenum % 2 == 0) {
				mymoney *= 2;
				printf("성공, 보유금액 %d", mymoney);
			}
			else {
				mymoney = 0;
				printf("실패, 보유금액 %d", mymoney);
			}
			break;
		}
	}

}