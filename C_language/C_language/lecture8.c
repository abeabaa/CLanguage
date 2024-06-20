#include "lectures.h"

//코드로 2진법,10,16진법 작성해서 데이터로 넘겨주기

//2,8,16,진수로 표현하는 법
//2진수 : "0b"2진수로 표현 : 0b1010; => 10
//8진수 : 앞에"0"붙이면 // 017 -->10진수로 15
//16진수 : 앞에"0x"붙이면 //0xF -->10진수로 15

//printf로 8진수표현 %o 16진수표현 %x
//%o는 8진수로 출력
//%x는 16진수로 출력

//float 실수, 소수점
//첫번째 방식 : 비트를 n:m으로 분할 후 n만큼 실수사용,m만큼 소수부분으로 사용하자
//문제점 : 소수를 자세히 표현하려면 정수를 표현할 공간이 너무 적어진다.
//해결법 : 소수를 정수표현으로 사용하지 말고 ,2e-1,2e-2자리수에 0또는 1 그 값을 더해서 표현하는 방식 도입

//8.625를 실수로 표현해보기 : 0b100.101?????????

// 비트표현방식
//비트부호: &,|,^,~
//비트이동(shift)부호 : >>, <<
//a&b : AND연산
//		1&0=0;
//		0&1=0;
//		0&0=0;
//		1&1=1;

//a|b : OR연산
//1 | 0 = 1;
//0 | 1 = 1;
//0 | 0 = 0;
//1 | 1 = 1;

//a^b : XOR연산
//0b1000
//0b1100
//0b0100

//a~반전 : 2의 보수 0b0001 -> 1110
//int num;
//num = ~num; //비트 반전시킴

//비트간의 이동 연산자
//8<<2; >>>>>>>>>>>>>>> 8*2e2로 이해가능
//	char 0b000100; << 2
//		 0b010000;
//32>>3; >>>>>>>>>>>>>>>>32/2e3로 이해가능
//		 0b00100; >>2
//		 0b00001;

//가장 앞에 있는 0은 생략되서 출력됨

void lecture8() {
	//int a_num 선언후 15넣어서 출력
	int a_num=15;
	printf("%d", a_num);

	a_num = 017;
	printf("a_num의 8진수 표현값을 10진수로 출력 :%o\n", a_num);
	a_num = 0xF;
	printf("a_num의 16진수 표현값을 10진수로 출력 :%x\n", a_num);
	a_num = 0b1111;
	printf("a_num의 2진수 표현값을 2진수로 출력 :%d\n", a_num);

	//문제1 -255를 2진수로 표현해보기
	int b_num = -255; //255를 2의 보수한 값
						//255를 2진법으로 표현 0b 00000000 00000000 00000000 11111111
						//225 표현한 걸 반전   0b 11111111 11111111 11111111 00000000
						//반전한 것에 +1       0b 11111111 11111111 11111111 00000001
	b_num = 0b11111111111111111111111100000001;
	printf("b_num의 값 :%d\n", b_num);

	float a_float = 0.25;
	printf("a_float의 값 :%f\n", a_float);

	//0.1+0.2가 0.3과 같은지 관계연산자로 표현
	//true면 1,false면 0 출력
	printf("부동 소수점의 에러\n");
	int bool = (0.1 + 0.2) == 0.3;
	printf("%d\n",bool); //결과 0출력

	float c_num = 0.0;
	
	for(int number=0;number <30; number++)
		c_num += 0.1;

	printf("%f\n", c_num);

	printf("비트연산문제\n");

	//두개의 정수 변수에 2진수 표현된 값이 있다.
	int d = 0b00001111;
	int e = 0b00010010;
	int my_int = 0b00000010;
	int result = d & e;
	printf("내가 계산한 값 %d 실제 값 %d\n", my_int, result);
	
	d = 0b0001111;
	e = 0b0010010;
	my_int = 0b0011101;
	result = d ^ e;
	printf("내가 계산한 값 %d 실제 값 %d\n", my_int, result);

	char overFlowedValue = 0b01000000; //2개가 왼쪽으로 시프트 되면 8개를 넘어간 1은 버려져서 0이 출력됨
	overFlowedValue=overFlowedValue << 1; //이게 어떻게 -255가 나올수 있지? -128이 최대아님? char형이잖아.
	//printf 출력해보기
	printf("%d\n", overFlowedValue);
	
	overFlowedValue = 0b0000100;
	overFlowedValue=overFlowedValue >> 5;
	//printf 출력해보기
	printf("%d\n", overFlowedValue);

	//10진수를 하나 입력받아서 해당 수의 2의 보수 값을 출력하는 코드를 작성해 보세요.(~)연산자 사용
	int twocomplement;
	scanf_s("%d", &twocomplement);
	twocomplement = ~twocomplement+1;
	printf("2의 보수의 값을 출력%d\n",twocomplement);

	//시프트 연산	
	//10진수 하나를 입력받아서 해당 수에 8을 곱하고 32를 나누는 코드를	사칙연산 없이 작성.
	char shiftnum=64;
	//scanf_s("%d", &shiftnum);
	// = shiftnum << 3 >> 5; //밑에 2개랑 다른 이유는 
	shiftnum=shiftnum << 3;
	shiftnum=shiftnum >> 5;
	printf("8을 곱한후 32로 나눈 값%d\n", shiftnum);

	//printf("%d", 0b11111100);
}