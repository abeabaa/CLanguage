//작성자 정재욱   shift alt
//작성일 20240617
//학습목표 디버깅
//문제 의심 부분에 중단점을 설정해 계산결과를 눈으로 확인 가능
//
//Operator 연산자
//대입,산술 연산자
//대입연산자 '=' 오른쪽 값을 왼쪽 변수에 넣어주는 기능

//복합 대입연산자
//종류 : a=a+b; >> a+=b
//		a=a-b >> a-=b
//		a=a*b >> a*=b
//		a=a>>b >> a>>=b
//		a=a|b >> a|=b

//증가,감소 연산자
//num++
// ++num
//num--
//--num
// ++ : +=1의 의미
// -- : -=1의 의미
//전위 증가 : 변수에 1을 먼저 더 해준 후 문장의 연산을 진행
//후위 증가 : 변수의 뒤에 ++또는 --가 오는 경우 값을 먼저 변화

//관계연산자
// 비교연산자, 두개의 값을 비교하여 그 관계를 표현하는 연산자
// a,b
// a=10 ,b=12
// 결과값이 true,false로 나옴 (1,0)
// 

//논리연산자
// AND,OR,NOT
// AND : &&   ---> A와B중 하나라도 거짓이면 false
// OR : ||   ---> A와B중 하나라도 참이면 true
// NOT : !   --->A가 true면 false, false면 true 반환
// 
// 연산 결합순위
// 
//


#include "lectures.h"

void lecture6() {//변수에 마우스 갖다대면 자료형 나옴

	/*printf("디버깅 예제문제\n"); //ctrl+f5디버깅 무시 컴파일
	char a, b, c;//f9 중단점 생성
	a = 100;
	b = 300;
	c = a + b;
	printf("%d+%d=%d\n", a, b, c);*/

	//9+2=11, 9-2=7

	/*printf("연산자 예제문제\n");
	int num1, num2, num3, result;
	result = 0;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("계산결과(l-value) = %d x %d + %d = %d", num1, num2, num3, num1*num2+num3);    //ctrl + k + c, ctrl + k + u, 오류는 항상 맨 위쪽부터
	printf("복합연산자(결과 %d += %d)\n", result, num1, num3);*/

	/*printf("증가 감소 연산자 예제문제\n");
	int PlusA = 10;
	int PlusB = (PlusA++) + 2; //☆☆☆☆☆☆☆☆☆☆
	printf("PlusB의 값은? %d", PlusB);
	printf("PlusA의 값은? %d", PlusA);*/

	//int num1 = 3, num3 = 1;
	//printf("결과값 = %d\n", num1 < num3);


	//문제 : 변수 A의 값은 3+4x5이고, 변수 b의 값은 7/3%2이다.
	//A,B의 값을 비교한 것을 result변수에 대입해 출력해보시오.
	printf("연산자 우선 순위 예제\n");

	int variableA=23;
	int variableB=0;
	int Final= variableA> variableB;

	printf("%d", Final);
}