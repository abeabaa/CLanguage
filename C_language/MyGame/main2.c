#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include"countnumfn.h"

//int startnumbersetting();  함수를 미리 선언해두는 방식
							//사용이유 : 컴파일러는 코드를 위부터 읽기 때문에 미리 선언되지 않은 함수를 호출할 수 없음
							// c언어에서 이렇게 하면 이 함수를 나중에 사용한다는 뜻

int main() {
	int computervalue = 10;//randomcomputervalue();
	int opper=setopper();//{}까지 같이 불러와져서 함수안의 변수들이 지역변수가 되어버림,
						//따라서 이 줄의 명령어가 끝나면 변수가 사라져버림
						//그래서 return과 동시에 할당해줘야 함.
	startgamesetting();
	int uservalue = inputuservalue();
	
	//scanf_s("%d", &uservalue);
	//printf("%d", uservalue);
	while (1) {
		printf("%d", opper);
		if (computervalue == uservalue) {
			gamewin();
			break;
		}
		else {
			if (opper <= 0) {
				printf("기회 소진, 게임오버\n");
				break;
			}
			opper--;
			printf("플레이어의 값을 다시 입력하세요\n");
			scanf_s("%d", &uservalue);
		}
	}
	return 0;
}