//�ۼ��� �����   shift alt
//�ۼ��� 20240617
//�н���ǥ �����
//���� �ǽ� �κп� �ߴ����� ������ ������� ������ Ȯ�� ����
//
//Operator ������
//����,��� ������
//���Կ����� '=' ������ ���� ���� ������ �־��ִ� ���

//���� ���Կ�����
//���� : a=a+b; >> a+=b
//		a=a-b >> a-=b
//		a=a*b >> a*=b
//		a=a>>b >> a>>=b
//		a=a|b >> a|=b

//����,���� ������
//num++
// ++num
//num--
//--num
// ++ : +=1�� �ǹ�
// -- : -=1�� �ǹ�
//���� ���� : ������ 1�� ���� �� ���� �� ������ ������ ����
//���� ���� : ������ �ڿ� ++�Ǵ� --�� ���� ��� ���� ���� ��ȭ

//���迬����
// �񱳿�����, �ΰ��� ���� ���Ͽ� �� ���踦 ǥ���ϴ� ������
// a,b
// a=10 ,b=12
// ������� true,false�� ���� (1,0)
// 

//��������
// AND,OR,NOT
// AND : &&   ---> A��B�� �ϳ��� �����̸� false
// OR : ||   ---> A��B�� �ϳ��� ���̸� true
// NOT : !   --->A�� true�� false, false�� true ��ȯ
// 
// ���� ���ռ���
// 
//


#include "lectures.h"

void lecture6() {//������ ���콺 ���ٴ�� �ڷ��� ����

	/*printf("����� ��������\n"); //ctrl+f5����� ���� ������
	char a, b, c;//f9 �ߴ��� ����
	a = 100;
	b = 300;
	c = a + b;
	printf("%d+%d=%d\n", a, b, c);*/

	//9+2=11, 9-2=7

	/*printf("������ ��������\n");
	int num1, num2, num3, result;
	result = 0;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("�����(l-value) = %d x %d + %d = %d", num1, num2, num3, num1*num2+num3);    //ctrl + k + c, ctrl + k + u, ������ �׻� �� ���ʺ���
	printf("���տ�����(��� %d += %d)\n", result, num1, num3);*/

	/*printf("���� ���� ������ ��������\n");
	int PlusA = 10;
	int PlusB = (PlusA++) + 2; //�١١١١١١١١١�
	printf("PlusB�� ����? %d", PlusB);
	printf("PlusA�� ����? %d", PlusA);*/

	//int num1 = 3, num3 = 1;
	//printf("����� = %d\n", num1 < num3);


	//���� : ���� A�� ���� 3+4x5�̰�, ���� b�� ���� 7/3%2�̴�.
	//A,B�� ���� ���� ���� result������ ������ ����غ��ÿ�.
	printf("������ �켱 ���� ����\n");

	int variableA=23;
	int variableB=0;
	int Final= variableA> variableB;

	printf("%d", Final);
}