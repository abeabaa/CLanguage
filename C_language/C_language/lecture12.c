#include "lectures.h"

/*
�ݺ����� ���ؿ� �ǽ�
*/
/*
for( �ʱ�� ; ���ǽ� ; ��ȭ�� ) //����   loop statement
{
	�ڵ峻��;					//body	   loop body
}
	�ʱ�� = int i=0; �ݺ����� �����Ҷ� �ʿ��� ������ ����,�Ҵ��� �̷����
	���ǽ� = i<10; ���ǽ��� ���̸� ��ü�ڵ带 �����ϰ� ��ȭ�� ����
	��ȭ�� = i++  �ʱ���� �������� ��ȭ���� ������ Ż���� �� �ְ� �ϴ� ��.

*/

void lecture12() {
	for (int i = 0; i < 10; i++) {
		printf("�ݺ���1\n");
	}

	int index;
	for (index = 10; index > 0; index--) {
		printf("�ݺ���2 %d\n",index);
	}
	//for();�ϰ� �Ǹ� for���� �Ʒ� ��ü �ڵ�� ���� ������ �ڵ�� �νĵ� �׷��� �ݺ��� 2 �ѹ��� ��µ�.
	
	for (int i_num = 0; i_num < 10; i_num += 2) {
		printf("�ݺ���3 %d\n", i_num);
	}
	//���� �ݺ��� �������� ctrl c
	//for (; ;) {
	//	printf("������");
	//}
}


void lecture12_2() {
	//scanf �� �� �ݺ����� �����ֱ�
	printf("�� �� �ݺ����� �����Ұ��ΰ�? ���ڸ� �Է��ϼ���.\n");
	int i_scanfnum;
	scanf_s("%d", &i_scanfnum);
	for (int i = 1; i <= i_scanfnum; i++) {
		printf("�ݺ��� %d��° ����\n", i);
	}

	//for ����2
	printf("�ݺ��� ���� 2\n");
	//1�̻� 100�̸��� ������ �� 7�ǹ���� 9�� ����� ����ϴ� ���α׷� �ۼ�
	//���ǻ��� //����� �༮�� �� ���� ��µǵ��� �ۼ�
	for (int i = 1; i < 100; i++) {
		int number = 1;
		number++;
		if (number / 7 == 0) {
			printf("%d\n", number);
		}
		else if (number / 9 == 0) {
			printf("%d\n", number);
		}
	}
	/*for (int i = 1; i < 100; i++) {
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d\n", i);
	}*/


	//while���� // 1�� ������ while������ �ٲ㼭 ���
}

void lecture12_3() {
	/*
	while(���ǽ�)  //���ǽ��� ���̸� ���� �����̸� �����ڵ� ����
	{
		�ڵ峻��;  /������ü
		��ȭ��;
	}
	*/int i = 0;
	while (i <10)//i�� 10���� ������ ��� �ݺ�
	{
		i+=5;
		printf("�ݺ�1");
	}

	int index;
	scanf_s("%d", &index);
	while (index!=3) { //while ���ǽĿ� �������� ���Կ����ڸ� ����ϸ� ���� ������ ���� �� �����Ƿ� ���� ���ѷ���
		printf("3�Է�");
		scanf_s("%d", &index);

	}

	while (1) {	// ���ѷ���
		printf("�Է�");
	}
	//do~while  �ѹ��� �ݵ�� ��µǴ� �ݺ���
	/*
	do
	{
		
	}
	*/
	int i_donum = 1;
	do {
		printf("�ѹ��� �ݵ�� ����ϴ� do~while�ݺ���");
		i_donum = i_donum + 1;
	} while (i_donum < 10);
}