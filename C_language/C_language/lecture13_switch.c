#include "lectures.h"

/*
switch(변수){
	case 변수의 값;
	실행되는 코드
	break;
	...
	...
	...
	default;
	break;
}
*/

void lecture13_switch() {
	int num;
	scanf_s("%d", &num);
	switch (num)
	{
	case 0:
		printf("num은 0이다.\n");
		break;
	case 1:
		printf("num은 1이다.\n");
		break;
	case 2:
		printf("num은 2이다.\n");
		break;
	case 3:
		printf("num은 3이다.\n");
		break;
	case 4:
		printf("num은 4이다.\n");
		break;
	default:
		printf("default입니다.\n");
		break;
	}//switch문으로 확률성 코드도 짤수 있음;;;
	//switch(변수) 변수의 데이터값은 정수형만 가능
	//()사이에 정수가 아니고 정수의 값으로 변환되는 식이어도 상관없음.
	//switch문은 가독성 때문에 쓰는 것

	/*char d_num = 'a';
	switch (d_num) {
	case 'a':
		break;
	case 'b':
		break;
	}*/  //여기선 아스키코드로 대체되기에 가능.
}