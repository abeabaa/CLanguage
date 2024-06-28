#include "lectures.h"

/*
학습목표 함수

왜 쓰나?
c언어는 절차지향 프로그래밍 언어
절차 = 함수. c언어 . 함수를 지향하는 언어

1. 코드가 길수록 코드 파악이 힘들고 유지보수가 힘들고 반복적인 코드가 발생
함수를 사용하면
..코드파악용이
..유지보수 쉽게
..반복적인 코드 줄임
*/


//함수의 선언
//4가지 방식
//반환값의 여부, 매개변수가 있는지 없는지

//유형1 반환값이 있고 매개변수도 있는 함구
//	반환하고픈 데이터형식 / 함수의 이름 / () { ; }    : 함수의 선언
int addtwonumber(int a, int b){ 
	int result = a+b;
	printf("%d\n", result);
	return result; //printf("%d\n", result);를 return 뒤에 두면 printf가 작동안됨
					//return은 무조건 필요하다. return은 break와 약간 비슷한 느낌
}
//유형2
//반환값이 없고 매개변수도 없는 함수
void showresult() {
	printf("결과를 출력하겠습니다.\n");

}

//유형3
//변환값이 없고 매개변수는 있는 함수
void changeresult(int result) {
	printf("결과가 %d로 변경되었습니다.\n",result);
}

//유형4
//반환값이 있고 매개변수는 없는 함수
int inputnumber() {
	int number;
	scanf_s("%d", &number);
	return number;
}

void lecture14() {
	//함수호출법
	//함수이름();
	int a = 5 + 7;
	printf("a의 값 %d\n", a);
	a=addtwonumber(5,7);
	showresult();
	changeresult(a);
	int c = inputnumber();
	printf("%d", c);
}
