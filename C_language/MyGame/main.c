#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	printf("���ӽ���!");
	printf("ȯ���մϴ�.��");
	
	//srand(time(NULL));
	//int computerValue = rand() % 100+1;
	int computerValue = 15;
	int opper=10;
	int userValue;
	//int userValue1;
	printf("���ڸ� �Է��ϸ� ������ ���۵˴ϴ�\n");
	scanf_s("%d", &userValue);
	//gamewin�Լ� ������ �¸��Լ�����


	while (1) {
		if (computerValue == userValue) {
			printf("�����Դϴ�.\n");
			break;
		}
		else {
			if (opper <= 0) {
				printf("��������");
				break;
			}
			opper--;
			printf("�÷��̾��� ���� �ٽ� �Է��ϼ���\n");
			scanf_s("%d", &userValue);

		}
	}



	/*if (userValue == computerValue) {
		printf("�����Դϴ�.\n");
	}
	else {
		while (opper != 0) {
			opper--;
			if (userValue == computerValue) {
				printf("�����Դϴ�.\n");
				break;
			}
			if (userValue > computerValue) {
				printf("�� �۽��ϴ�.\n");
			}
			else if (userValue < computerValue) {
				printf("�� Ů�ϴ�.\n");
			}
			printf("�ٽ� �Է��ϼ���.%d�� ��ȸ����\n", opper);
			scanf_s("%d", &userValue);
			if (opper == 0) {
				printf("����");
			}
		}
	}*/
	
	

	//printf("��ǻ���� ������ %d �Դϴ�.", computerValue);
	//printf("�÷��̾��� ���� %d �Դϴ�.", userValue);

	//�÷��̾��� ���� ��ǻ�Ͱ��� ������ ����, �ƴϸ� ����
	//���н� �ٽýõ�

	return 0;
}