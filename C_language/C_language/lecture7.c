/*
작성자 정재욱
20240618
컴퓨터가 데이터를 표현하는 방식
*/

//진법
//2진법,10진법,16진법에 대해서 알아보자.
//n진법은 n개의 기호로 수를 표현하는 방식
//2진법 : 0,1로 수를 표현
//10진법 : 10개의 수, 16진법 1개의 수
//진법으로 수의 계산
//2진법 : 각 자리의 수에 0 또는 1이 들어감, 2의 n승으로 표현된 덧셈으로 10진수 표현가능
// 14를 2진수로 표현해보기
// 16진법 쓰는 이유 : 2진법으로 16진법을 표현하기 쉽기 때문
// 
//컴퓨터가 문자를 표현하는 비밀
//ASCII코드
//1byte 2의 8승만큼 수를 표현할 수 있다. 256개

void lecture7()
{
	//문자를 표현하는 방식
	//char 데이터를 지정하는 방법 : ''따옴표안에 문자 작성
	char firstcharacter = 'a';
	printf("문자를 출력해 봅시다 %c\n", firstcharacter);

	//문자를 하나 변수에 지정하고 그 문자를 출력해보세요
	//char a = 'good';
	//printf("문자를 출력해 봅시다 %c", a);
	char y = 65;
	printf("char데이터 형식에 정수를 넣으면 어찌되나? %c\n", y);

	//정수형 변수
	int slnt = 'A';
	printf("정수형 변수에 문자를 담았을 때 출력되는 결과 %d\n", slnt);

	//한글은 어떻게 숫자로 표현을 하고 있을까?
	printf("데이터 출력 문제1\n");
	int fint = 128;
	char fchar = fint;
	printf("%c\n", fchar);
	//예상 값 128
	//실제 값 -128

	//양의 정수를 표현하는 방법
	//1바이트(8비트)공간에서 부호 있는 정수를 표현하는 법
	//MSN(Most Significant Number) : 0이면 양수 1이면 음수

	//음의 정수를 표현하는 방법
	//MSN 1을 넣은 다음 나머지 공간을 숫자로 표현하면 그것이 음수가 된다.
	//2의 보수 방식이란. 모든 비트공간에 0과 1을 뒤바꾸어 준 후 1을 더해준다.

	//오버플로우
	//데이터가 넘쳐흐르는 현상. 제한된 메모리를 초과해서 표현할 수 있는 범위를 넘어서면 엉뚱한 결과가 나오는 현상

	printf("오버플로우 예시");
	char o_a, o_b, o_c;
	o_a = 100;
	o_b = 300;      
	o_c = o_a + o_b;
	printf("오버플로우 결과 확인 : %d\n", o_c);

	//문제 1. a와 z를 숫자를 이용해서 출력해보세요
	char c1 = 97, c2 = 122;
	printf("%c %c\n", c1, c2);
	//문제2 -255를 비트로 표현해보세요
	

	//문제3 src변수에 scanf_s를 이용해서 숫자를 받고 아스키 문자로
	//출력할 수 있는 printf변환을 작성해보세요.
	//printf 서식문자 %c를 써서 받은 숫자를 아스키 문자로 출력하게 표현
	int src;
	printf("숫자를 입력");
	scanf_s("%d", &src);
	printf("%c", src);
}