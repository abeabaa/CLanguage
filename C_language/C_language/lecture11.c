#include "lectures.h"

//�н���ǥ �ڵ��� �帧�� �����Ѵ� . ���ǹ�
//�� ����� �ϳ�==> �������� �ֱ� ����

//�ǻ��ڵ�(�����ڵ�, �����ڵ� , pseudo codes)
//�ڵ�� �ٷ� �ۼ��ϱ⿣ ��Ʊ⿡ ������ �帧�� �ֹ��ϱ� ����� �ڵ��� ���
//����� ���� ���α׷��� �� �ۼ��Ѵ�. �̷� �� �ǻ��ڵ�� ��

//if ���ǹ� ����
//if(���ǽ�)
//{
//	���� ���϶� ������ �ڵ�;
//}

//������1. if(���ǽ�); ���� ���X
//������2. "="��"=="�� �򰥸��� �ʱ�
//c���� 0�̿��� ���ڴ� ���ǹ��ȿ��� ���̶�� �ν�, 0�� �������� �ν�

//

void lecture11() 
{
	int num1 = 5;
	if (num1 == 10) {//���ǻ��� 1. if(���ǹ�); ǥ���� ����Ѹ� �ȵȴ�.
		printf("���̴�");
	}
	//�Ǽ��� ������ ���ǹ� ���
	float f_num1 = 0.1f;
	if (f_num1 == 0.1f) {
		printf("0.1�Դϴ�\n");
	}
	//if (f_num == )

	//scanfs�� ���ǹ� �ۼ�
	//������� �Է��� �޾� �� ���� ������ ��
	//�ٸ��� ����
	int user_number,computer_number=15;
	printf("���ڸ� �Է��ϼ���");
	scanf_s("%d", &user_number);
	if (user_number == computer_number) {
		printf("���̴�.");
	}

	int c_num2 = 'k';
	//c_num2�� k�� ��ġ�ϸ� "k�Դϴ�."�� ����ϰ�,
	//��ġ���� ������ c_num2�� k������ �����Ű�� �ڵ� �ۼ�
	if (c_num2 == 'k') {
		printf("k�Դϴ�");
	}
	if (c_num2 != 'k') {
		printf("k�ƴϴ�.");
	}
}
void lecture11_2() {
	int score;
	printf("������ �Է��ϼ���\n");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("A��");
	}
	else if (score >= 80) {
		printf("B��");
	}
	else if (score >= 70) {
		printf("C��");
	}
	else if (score >= 60) {
		printf("D��");
	}
	else
		printf("F��");
}