#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include"countnumfn.h"

//int startnumbersetting();  �Լ��� �̸� �����صδ� ���
							//������� : �����Ϸ��� �ڵ带 ������ �б� ������ �̸� ������� ���� �Լ��� ȣ���� �� ����
							// c���� �̷��� �ϸ� �� �Լ��� ���߿� ����Ѵٴ� ��

int main() {
	int computervalue = 10;//randomcomputervalue();
	int opper=setopper();//{}���� ���� �ҷ������� �Լ����� �������� ���������� �Ǿ����,
						//���� �� ���� ��ɾ ������ ������ ���������
						//�׷��� return�� ���ÿ� �Ҵ������ ��.
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
				printf("��ȸ ����, ���ӿ���\n");
				break;
			}
			opper--;
			printf("�÷��̾��� ���� �ٽ� �Է��ϼ���\n");
			scanf_s("%d", &uservalue);
		}
	}
	return 0;
}