#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	printf("���ӽ���!");
	printf("ȯ���մϴ�.��");
	
	srand(time(NULL));
	int computerValue = rand() % 100+1;
	int userValue;
	int userValue1;
	printf("���ڸ� �Է��ϸ� ������ ���۵˴ϴ�\n");
	scanf_s("%d", &userValue);
	if (userValue == computerValue) {
		printf("�����Դϴ�.");
	}
	else if (userValue != computerValue) {
		printf("����, �ٽýõ�");
	}
	scanf_s("%d", &userValue1);

	if (userValue1 == computerValue) {
		printf("�����Դϴ�.");
	}
	else if (userValue1 != computerValue) {
		printf("����");
	}
	//printf("��ǻ���� ������ %d �Դϴ�.", computerValue);
	//printf("�÷��̾��� ���� %d �Դϴ�.", userValue);

	//�÷��̾��� ���� ��ǻ�Ͱ��� ������ ����, �ƴϸ� ����
	//���н� �ٽýõ�

	return 0;
}