#include "lectures.h"

/*
switch(����){
	case ������ ��;
	����Ǵ� �ڵ�
	break;
	...
	...
	...
	default;
	break;
}
*/

void lecture13_switch() {
	int num;
	scanf_s("%d", &num);
	switch (num)
	{
	case 0:
		printf("num�� 0�̴�.\n");
		break;
	case 1:
		printf("num�� 1�̴�.\n");
		break;
	case 2:
		printf("num�� 2�̴�.\n");
		break;
	case 3:
		printf("num�� 3�̴�.\n");
		break;
	case 4:
		printf("num�� 4�̴�.\n");
		break;
	default:
		printf("default�Դϴ�.\n");
		break;
	}//switch������ Ȯ���� �ڵ嵵 ©�� ����;;;
	//switch(����) ������ �����Ͱ��� �������� ����
	//()���̿� ������ �ƴϰ� ������ ������ ��ȯ�Ǵ� ���̾ �������.
	//switch���� ������ ������ ���� ��

	/*char d_num = 'a';
	switch (d_num) {
	case 'a':
		break;
	case 'b':
		break;
	}*/  //���⼱ �ƽ�Ű�ڵ�� ��ü�Ǳ⿡ ����.
}