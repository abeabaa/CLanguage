#include "lectures.h"
//작성자 정재욱
//20240620
//학습목표 c언어 기본 자료형+상수

//자료형이 무엇인가?
// 변수를 만들기 위해 필요
// ->컴퓨터가 받아들일수 있는 자료의 크기 

//기본자료형의 종류와 데이터의 표현범위
//1.정수형
// char		:1바이트(8비트) 2e8 (256개) -128~127
// short	:2바이트  -2e15~2e15-1
// int		:4바이트  -2e31~2e31-1
// long		:4바이트  int형에서 이것보다 큰 값이 나올경우 오버플로우 때문에 유동적으로 표현범위를 늘릴수 있게 함
// long long:8바이트  -2e63~2e63-1
//
// ANSI : C언어의 표준을 정하는 협회
// 
// 2.실수형
// float		:4바이트 .  부호. 지수부. 가수부// 소수점 6자리 표현
// double		:8바이트    소수점15자리 표현가능
// long float	:8바이트    소수점18자리 표현가능

//		unsigned
// unsigned char : 첫번째 부호비트없는 정수 표현식 0~2e8개 저장가능
// unsigned int : 0~2e32개 저장

//sizeof 연산자
// int i_num = sizeof(int); //4 //일반적으로 ()사용하지만 함수는 아님
 
// 상수
// 변하지 않는 수
// 종류 :이름을 갖는 상수, 갖지 않는 상수(literal)
// double my_double(변수) = 3.15(갖지 않는 상수,리터럴 상수);
// 
// 리터럴 상수에서 정수는 기본 자료형이 int이다.
// int보다 큰수는 자동으로 더 큰 데이터형이 선택됨
// 
// int보다 작은 자료형은 왜 int로 지정되나?
// 가장 많이 사용하는 데이터타입이 int 따라서 char등이 int와 연산을 하는 경우가 잦음
// 
// 실수는 기본 자료형 double이다.
// my_float = 3.15f; >> 3.15의 자료형을 f로 갖겠단 뜻
// 
// my_long=3.15L;
// UL  : unsigned long
// LL  : long long
// ULL  : unsigned long long
// 
// f   : float
// L   : long float

// 이름있는 상수 : 심볼릭 상수
// 중력의 크기 : -9.8f
// 
// const float gravity = -9.8f; 앞에 const를 붙이면 gravity변수를 바꿀수 없게 됨
// const선언과 동시에 초기화를 해줘야 함, 안하면 값이 없는 채로 고정되기 때문
// gravity = -9.0f; 이렇게 되면 오류발생
// 
// 전처리기가 컴파일전 GRAVITY 라는 변수를 전부 -9.8로 변환시킨다.
// #define GRAVITY = -9.8f;
// 
// 상수작성시 이름 명명방법
// 대문자로 작성하되 띄어쓰기는 _
// 예시) GET_TIME_PRINCIPLE

void lecture9() {
	//sizeof 연산자를 사용해서 데이터량 출력하기

	//코드밑의 초록울퉁불퉁줄은 경고해주는 기능
	//%d와 
	double a=sizeof(char);
	printf("char데이터 크기 %d\n",sizeof(char));//sizeof의 리턴타입은 size_t라서 그럼?
	//int a=sizeof(char);
	printf("short데이터 크기 %d\n", a);//그래서 double을 int로 바꾸면 해결됨. 에러경고줄
	printf("long long데이터 크기 %d\n", sizeof(long long));
	printf("long long데이터 크기 %d\n", sizeof(long));

	//문제 리터럴 상수를 sizeof 연산자로 출력하세요
	// 3.15, 3.15f, 10, 어떤 데이터를 출력하는지 파악해보기
	//예를 들어 sizeof(5); 어떤 값이 출력하는 함수로 표현해보기
	printf("%d\n", sizeof(3.15));
	printf("%d\n", sizeof(3.15f));
	printf("%d\n", sizeof(10));

	//문제2 직사각형의 넓이를 구하는 프로그램 작성
	//첫번째 조건 좌표를 2개 지정받아야 함. (xpos1,ypos1)(xpos2,ypos2)
	//두번째 2가 1보다 커야함 4,6 6,8
	int xpos2 = 6, xpos1 = 4, ypos2 = 8, ypos1 = 6;
	int n = (xpos2 - xpos1) * (ypos2 - ypos1);
	printf("넓이 : %d", n);

	const PI = 3.14;
	printf("%d", 4*4*PI);
}