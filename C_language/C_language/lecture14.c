#include "lectures.h"

/*
�н���ǥ �Լ�

�� ����?
c���� �������� ���α׷��� ���
���� = �Լ�. c��� . �Լ��� �����ϴ� ���

1. �ڵ尡 ����� �ڵ� �ľ��� ����� ���������� ����� �ݺ����� �ڵ尡 �߻�
�Լ��� ����ϸ�
..�ڵ��ľǿ���
..�������� ����
..�ݺ����� �ڵ� ����
*/


//�Լ��� ����
//4���� ���
//��ȯ���� ����, �Ű������� �ִ��� ������

//����1 ��ȯ���� �ְ� �Ű������� �ִ� �Ա�
//	��ȯ�ϰ��� ���������� / �Լ��� �̸� / () { ; }    : �Լ��� ����
int addtwonumber(int a, int b){ 
	int result = a+b;
	printf("%d\n", result);
	return result; //printf("%d\n", result);�� return �ڿ� �θ� printf�� �۵��ȵ�
					//return�� ������ �ʿ��ϴ�. return�� break�� �ణ ����� ����
}
//����2
//��ȯ���� ���� �Ű������� ���� �Լ�
void showresult() {
	printf("����� ����ϰڽ��ϴ�.\n");

}

//����3
//��ȯ���� ���� �Ű������� �ִ� �Լ�
void changeresult(int result) {
	printf("����� %d�� ����Ǿ����ϴ�.\n",result);
}

//����4
//��ȯ���� �ְ� �Ű������� ���� �Լ�
int inputnumber() {
	int number;
	scanf_s("%d", &number);
	return number;
}

void lecture14() {
	//�Լ�ȣ���
	//�Լ��̸�();
	int a = 5 + 7;
	printf("a�� �� %d\n", a);
	a=addtwonumber(5,7);
	showresult();
	changeresult(a);
	int c = inputnumber();
	printf("%d", c);
}
