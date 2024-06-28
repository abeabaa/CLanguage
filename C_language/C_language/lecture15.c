#include "lectures.h"

/*
지역변수와 전역변수의 이해

지역변수(localvariable) : 중괄호 내부에서 생성되는 변수, 지역변수는 선언된 지역내만 유효

변수의 존재기간 :중괄호가 끝날 때 까지. 지역변수가 저장되는 공간(메모리 공간)을 스택이라 함

변수의 접근범위 : 범위 밖에서 선언된 변수와 범위 안에서 선언된 변수의 이름이 같을때 어떤게 우선순위?

같은 지역내에서 같은 이름의 변수는 선언불가 -- 컴파일러가 어떤 변수를 써야하는지 모르기 때문

범위가 다른 곳에서 같은 이름의 변수가 선언되었다면, 가장 가까운 범위의 변수를 사용
*/

/*
전역변수(global variable) : 중괄호 밖에 선언된 변수

전역변수는 사용을 지양해야 함. 그러나 필요한 때가 있음

*/
int count=0;


void lecture15() {
	int count = 10;
	printf("%d\n", count);
	int num = 17;
	simple();
	printf("%d\n",count);
}

int simple() {
	count++;
	int num = 10;
	num++;

	return num;
}