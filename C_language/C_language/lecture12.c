#include "lectures.h"

/*
반복문의 이해와 실습
*/
/*
for( 초기식 ; 조건식 ; 변화식 ) //선언문   loop statement
{
	코드내용;					//body	   loop body
}
	초기식 = int i=0; 반복문이 시작할때 필요한 변수의 선언,할당이 이루어짐
	조건식 = i<10; 조건식이 참이면 본체코드를 실행하고 변화식 실행
	변화식 = i++  초기식의 변수값을 변화시켜 조건을 탈출할 수 있게 하는 식.

*/

void lecture12() {
	for (int i = 0; i < 10; i++) {
		printf("반복문1\n");
	}

	int index;
	for (index = 10; index > 0; index--) {
		printf("반복문2 %d\n",index);
	}
	//for();하게 되면 for문과 아래 본체 코드는 서로 각각의 코드로 인식됨 그래서 반복문 2 한번만 출력됨.
	
	for (int i_num = 0; i_num < 10; i_num += 2) {
		printf("반복문3 %d\n", i_num);
	}
	//무한 반복문 강제종료 ctrl c
	//for (; ;) {
	//	printf("무한한");
	//}
}


void lecture12_2() {
	//scanf 몇 번 반복할지 정해주기
	printf("몇 번 반복문을 실행할것인가? 숫자를 입력하세요.\n");
	int i_scanfnum;
	scanf_s("%d", &i_scanfnum);
	for (int i = 1; i <= i_scanfnum; i++) {
		printf("반복문 %d번째 실행\n", i);
	}

	//for 예제2
	printf("반복문 예제 2\n");
	//1이상 100미만의 정수들 중 7의배수와 9의 배수를 출력하는 프로그램 작성
	//주의사항 //공통된 녀석이 한 번만 출력되도록 작성
	for (int i = 1; i < 100; i++) {
		int number = 1;
		number++;
		if (number / 7 == 0) {
			printf("%d\n", number);
		}
		else if (number / 9 == 0) {
			printf("%d\n", number);
		}
	}
	/*for (int i = 1; i < 100; i++) {
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d\n", i);
	}*/


	//while예제 // 1번 문제를 while문으로 바꿔서 출력
}

void lecture12_3() {
	/*
	while(조건식)  //조건식이 참이면 실행 거짓이면 다음코드 실행
	{
		코드내용;  /루프본체
		변화식;
	}
	*/int i = 0;
	while (i <10)//i가 10보다 작으면 계속 반복
	{
		i+=5;
		printf("반복1");
	}

	int index;
	scanf_s("%d", &index);
	while (index!=3) { //while 조건식에 조건으로 대입연산자를 사용하면 무한 루프에 빠질 수 있으므로 주의 무한루프
		printf("3입력");
		scanf_s("%d", &index);

	}

	while (1) {	// 무한루프
		printf("입력");
	}
	//do~while  한번은 반드시 출력되는 반복문
	/*
	do
	{
		
	}
	*/
	int i_donum = 1;
	do {
		printf("한번은 반드시 출력하는 do~while반복문");
		i_donum = i_donum + 1;
	} while (i_donum < 10);
}