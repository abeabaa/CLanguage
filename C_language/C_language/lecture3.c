/*#include <stdio.h> //standardinputoutput

//main함수는 시작과 끝을 알리는 함수.반드시 1개만 존재
//소스파일>우클릭 속성>빌드에서 제외기능으로 원하는 파일만 빌드 가능

//작성자 정재욱
//20240612
//학습주제 변수(variable)

//명령하고 그 내용을 저장하기 위해 변수 사용

//선언: 컴파일러에게 변수가 무엇을 저장하고 얼만큼 저장해야하는지 알려주는 것
//int > 정수 (4byte저장)
//float > 실수
//방법 : int a;

//할당 : 선언한 변수에 데이터를 넣는 것 (int a = 10;)
//언어에서 =는 "같다"는 뜻이 아닌 "할당"의 뜻

//초기화 : 변수에 처음으로 데이터를 저장하는 것
//printf의 f는 format의 줄임말



int main()
{
	//int a;
	//a = 4 + 7;
	//a = 1 + 3;
	//printf("%d\n", a);
	//float b = 3.2 + 6.9;
	//printf("%f", b);

	//문제1
	//변수width,height,length라는 정수를 담을 수 있는 변수 선언 각각 12 10 8 부피변수 volume
	//int width = 12, height = 10, length = 8;
	//float volume = width * height * length;
	//volume = volume / 165;
	//printf("문제의 답은 : %.2f", volume);
	//volume= (volume+164) / 165;
	//printf("문제의 답은 : %f", volume);

	float c = 1;
	float f;
	f = (9.0 / 5.0) * c + 32;//왜 9와 5로 하면 안되나? 왜냐하면 컴퓨터는 9,5를 정수로 받아들이기 때문에 1이 나오는 것 따라서 9.0,5.0을 해야 실수로 받아들임.
	printf("섭씨 to 화씨 : %.2f", f);

	return 0;
}*/
#include <stdio.h>

void main()
{
	int a = 5 + 3;
	a = 4 + 7;
	printf("%d \n", a);
	float b = 3.2f + 4.7f;
	printf("%f \n", b);

	// 문제 1-1
	// 변수의 이름 width, height, length 정수를 담을 수 있는 변수 선언
	int width = 12;
	int height = 10;
	int length = 8;

	// 문제 1-2. 세 변을 곱한 값(부피) Volume 변수에 저장하세요
	int Volume = width * height * length;
	// 문제 1-3. Volume / 165로 나누어 원하는 계산 값을 구한다. Printf 함수로 출력하세요.
	Volume = (Volume + 164) / 165;

	float Volume_f = width * height * length;
	Volume_f = Volume_f / 165;

	printf("문제 3의 답 : %d \n", Volume);
	printf("문제 3- : %f \n", Volume_f);

	// 문제 2-1  섭씨, 화씨 
	// 화씨 = 9/5 * 섭씨 + 32
	// 화씨가 실수로 표현될 수 있도록 변수를 선언해주세요.
	// 9/5의 값이 1이 아닌 1.8이 나와야 합니다.
	// 섭씨 1, 화씨 33.8

	float Celsius = 1.5f;			     	    // 섭씨
	float Fahrenheit = 9.0f / 5.0f * Celsius + 32;	// 화씨

	printf("섭씨 to 화씨 : %.3f", Fahrenheit);
}
