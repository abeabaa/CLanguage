#include "lectures.h"
//작성자 정재욱
//20240621
//학습목표 데이터의 형변환
//1.종류 : 자동 형 변환, 강제 형 변환
//2. 정수의 승격
//3. 연산자 자료형 불일치
//4. 형변환 연산자

//자동으로 형을 변환(묵시적변환=자동형변환),수동으로 형 변환(명시적변환)

//묵시적 변환
//서로 다른 자료형 끼리 연산을 할때 마음대로 변경해도 문제없나?
//정수형 변수와 실수형 값을 더할 때 무슨 일이?

//정수의 승격
//char1바이트,short2바이트등이 자동으로 int형으로 바뀌는 것

//연산자 불일치에 따른 자동 형 변환
//서로 다른 데이터형의 연산이 발생했을때
//char,short>>>int변환 (정수의 승격으로 인한 형 변환)
//(우선도 낮음) int >> long >> long long >> float >> double >> long double

//명시적 형 변환
//필요에 의해 : 3/4가 0이 출력되는 문제
//선언에 사용된 데이터를 int로 유지한채 0.75가 나오게 하고싶음
//3을 강제고 3.0으로 변경

//


void lecture10() {
	int num = 3 + 4.75 + 5.25;
	printf("%d\n", num);//결과 13

	/*double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;
	printf("정수 245를 실수로: %f\n", num1);//245.000000
	printf("실수3.1415를 정수로 : %d\n", num2);//3
	printf("큰 정수 129를 작은 정수%d\n", ch);//-127*/

	//정수의 승격 예제
	//short num1 = 15, num2 = 25;
	//short num3 = num1 + num2;

	//예제문제

	int d_num1 = 3, d_num2 = 4;
	float divresult = (float)d_num1 / d_num2;
	printf("%f\n", divresult);
	//float divresult = (float)(d_num1 / d_num2);//정수랑 실수랑 같이 할땐 실수가 우선순위
	printf("%f\n", divresult);

}