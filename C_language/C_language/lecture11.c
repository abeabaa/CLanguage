#include "lectures.h"

//학습목표 코드의 흐름을 제어한다 . 조건문
//왜 배워야 하나==> 유연성을 주기 위해

//의사코드(수도코드, 슈도코드 , pseudo codes)
//코드로 바로 작성하기엔 어렵기에 논리적인 흐름을 주문하기 어려운 코드인 경우
//사람의 언어로 프로그래밍 언어를 작성한다. 이런 언어를 의사코드라 함

//if 조건문 사용법
//if(조건식)
//{
//	식이 참일때 실행할 코드;
//}

//주의점1. if(조건식); 문법 사용X
//주의점2. "="와"=="를 헷갈리지 않기
//c언어는 0이외의 숫자는 조건문안에서 참이라고 인식, 0은 거짓으로 인식

//

void lecture11() 
{
	int num1 = 5;
	if (num1 == 10) {//주의사항 1. if(조건문); 표현을 사용한면 안된다.
		printf("참이다");
	}
	//실수와 문자의 조건문 사용
	float f_num1 = 0.1f;
	if (f_num1 == 0.1f) {
		printf("0.1입니다\n");
	}
	//if (f_num == )

	//scanfs로 조건문 작성
	//사용자의 입력을 받아 그 값이 같으면 참
	//다르면 거짓
	int user_number,computer_number=15;
	printf("숫자를 입력하세요");
	scanf_s("%d", &user_number);
	if (user_number == computer_number) {
		printf("참이다.");
	}

	int c_num2 = 'k';
	//c_num2가 k와 일치하면 "k입니다."를 출력하고,
	//일치하지 않으면 c_num2를 k값으로 변경시키는 코드 작성
	if (c_num2 == 'k') {
		printf("k입니다");
	}
	if (c_num2 != 'k') {
		printf("k아니다.");
	}
}
void lecture11_2() {
	int score;
	printf("점수를 입력하세요\n");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("A급");
	}
	else if (score >= 80) {
		printf("B급");
	}
	else if (score >= 70) {
		printf("C급");
	}
	else if (score >= 60) {
		printf("D급");
	}
	else
		printf("F급");
}