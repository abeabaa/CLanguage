#include "lectures.h"

/*
* break, continue;�� ���ؼ�
* �ݺ��� ���ǹ� �������ִ� �����
* for,while,do while,switch���� ���
*/

/*
break : �����帧���� ����� ���� ���
continue : �����帧�� ������ ä �ش� �ڵ��� ���ุ �ǳʶٴ� ���
*/

/*

*/

void lecture13() {

	/*for (int i = 0; i < 10; i++) {
		printf("sfda\n");
		if (i == 7) {
			printf("i�� 7�϶� �ߴ�\n");
			break;
		}
	}*/


	/*int targetnum;
	int count = 0;
	scanf_s("%d", &targetnum);
	for (; ;) {
		count++;
		if (targetnum == count) {
			printf("�ۼ��� ���� %d", count);
			break;
		}*/   //alt + shift + ���콺����Ű	 �Ǵ�		ctrl+ k+c�� ctrl+k+u �ּ�����Ű
	
	/*int targetnum;
	int count = 0;
	scanf_s("%d", &targetnum);
	while (1) {
		count++;
		if (targetnum == count) {
			printf("�ۼ��� ���� %d", count);
			break;
		}
	}*/

	//continue ��뿹��
	/*int w_num = 0;
	while (w_num<10) {
		if (w_num % 2 != 0) {
			printf("�н��� w_num�� �� %d\n", w_num);
			continue;
		}
		printf("w_num�� �� %d\n", w_num);
		w_num++;
	}*///���� ���ѹݺ�?

	int dicenum;
	int mymoney=4;//���콺�� �巡�� �ϰ� ��Ʈ+����Ű
	printf("�ֻ��� ���� ����");
	scanf_s("%d", &dicenum);
	while (1) {
		if (dicenum < 1 || dicenum>12) {
			printf("�ٽ� �Է��ϼ���\n");
			scanf_s("%d", &dicenum);
		}
		else {
			if (dicenum % 2 == 0) {
				mymoney *= 2;
				printf("����, �����ݾ� %d", mymoney);
			}
			else {
				mymoney = 0;
				printf("����, �����ݾ� %d", mymoney);
			}
			break;
		}
	}

}