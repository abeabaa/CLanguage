#include "lectures.h"

void lecture4_1()
{
	int num = 500;
	printf("���� ������ �ݾ� : 450�� \n");
	printf("\"���� ������ �ݾ� : %d��\" \n", num);

	// ��ӵ� ��Ģ���� ���� ����� �� �� ���� ���ڵ��� �ִ�.
	// �̷��� ���ڵ��� ����ϰ� ���� �� �̽������� : "\"
	// \ + (��ӵ� ����) : ���ο� ����� ������ �� �ִ�.
	// ���� : \n , \a ,  \t, \b, \r , \\, \? , \", \'

	/*
	   \n :	�� ���� ����ش�. ����. new line
	   \a :	alarm. ������ ������� ����Ѵ�.
	   \t :	tab ���� ���ڻ����� ������ ����(tab) ���.
	   \b : backSpace, �ܼ� Ŀ���� �� ĭ �ڷ� �̵���Ų��.
	   \r :	ĳ���� ����(return), ���콺 Ŀ���� �ش� ���� �� ó������ �̵���Ų��.
	   \\, \?, \", \' :	�ý��� ��� �� �⺻�� ����� �� ���� ���ڸ� ����ϰ� ���ش�.
	*/

	printf("���� ������ �ݾ� : %d�� \n", num);
	printf("\a");
	printf("hello\b\bhi\n");
	printf("�ǳ��ϼ���\r�ȳ�\n");
	printf("�ݰ�\t���ϴ�. \n");
	printf("\\ \' \" \? ������ �߻� �ϳ���? \n");

	// ������ �̿��� �������� ����.
	// ������ �����ϴ� �پ��� ���
	// (1) ������ ����, ���� �Ҵ�
	int num1;
	num1 = 10;
	// (2) ���� �ʱ�ȭ. (����� �Ҵ�)
	int num2 = 20;
	// (3) ������ ���ÿ� ����, �� ������ ���� ���� �͸�!
	int num3, num4, num5;
	num3 = 10, num4 = 20, num5 = 30;
	printf("%d %d %d", num3, num4, num5);
	// (4) ������ ���ÿ� ����� �Բ� �Ҵ�;

	// ���� �̸� �ۼ� �� ���� ����(���� ����)

	// ������ ù ���ڿ� ���ڰ� ���� �ȵȴ�.
	//int 776num;
	// #,$ Ư�� ��ȣ�� �̸��� ����� �� ����.
	//int #num;
	// ���� �̸� ���̿� ����(���� ����)�� �� �� ����.
	//int your function;
	// Ű���嵵 �̸����� ����� �� ����.
	// auto, enum, break, return, void, float, short, while
	//int union;

	// ������ �̸��� �� ���� ���� ������ �ؾ��մϴ�.

	//int abc = 10;
	int playerHP = 100;
}