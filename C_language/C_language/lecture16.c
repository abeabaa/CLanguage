#include "lectures.h"
#include <stdbool.h>

//학습목표 배열
//별 피하기 게임의 별을 여러개 생성하고자 함

//선언
// 변수의 선언 데이터형,변수이름=값
// 배열의 선언 데이터형,배열이름[];
// 
// 배열을 선언하는 첫번째 방법
// 데이터형 배열이름[배열의 수]
// 
// 배열을 선언하는 두번째 방법
// 
//

void lecture16() {
	int a1, a2, a3;
	//배열1
	int arr1[10] = { 0 };
	//배열2
	int arr2[] = { 0,1,2,3,4,5,6,7 };
	//배열3
	int arr3[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 10; i++) {
		printf("배열에 들어간 요소 출력 : %d\n", arr3[i]);
	}

	int ex[10] = { 0 };
	int ey[10] = { 0 };
	bool enemy[10] = { false };

	for (int i = 0; i < 10; i++) {
		printf("ex값 출력 : %d, ey값 출력 : %d, enemy : %d\n", ex[i], ey[i], enemy[i]);
	}
}