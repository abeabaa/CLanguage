/*#include <stdio.h> //standardinputoutput

//main�Լ��� ���۰� ���� �˸��� �Լ�.�ݵ�� 1���� ����
//�ҽ�����>��Ŭ�� �Ӽ�>���忡�� ���ܱ������ ���ϴ� ���ϸ� ���� ����

//�ۼ��� �����
//20240612
//�н����� ����(variable)

//����ϰ� �� ������ �����ϱ� ���� ���� ���

//����: �����Ϸ����� ������ ������ �����ϰ� ��ŭ �����ؾ��ϴ��� �˷��ִ� ��
//int > ���� (4byte����)
//float > �Ǽ�
//��� : int a;

//�Ҵ� : ������ ������ �����͸� �ִ� �� (int a = 10;)
//���� =�� "����"�� ���� �ƴ� "�Ҵ�"�� ��

//�ʱ�ȭ : ������ ó������ �����͸� �����ϴ� ��
//printf�� f�� format�� ���Ӹ�



int main()
{
	//int a;
	//a = 4 + 7;
	//a = 1 + 3;
	//printf("%d\n", a);
	//float b = 3.2 + 6.9;
	//printf("%f", b);

	//����1
	//����width,height,length��� ������ ���� �� �ִ� ���� ���� ���� 12 10 8 ���Ǻ��� volume
	//int width = 12, height = 10, length = 8;
	//float volume = width * height * length;
	//volume = volume / 165;
	//printf("������ ���� : %.2f", volume);
	//volume= (volume+164) / 165;
	//printf("������ ���� : %f", volume);

	float c = 1;
	float f;
	f = (9.0 / 5.0) * c + 32;//�� 9�� 5�� �ϸ� �ȵǳ�? �ֳ��ϸ� ��ǻ�ʹ� 9,5�� ������ �޾Ƶ��̱� ������ 1�� ������ �� ���� 9.0,5.0�� �ؾ� �Ǽ��� �޾Ƶ���.
	printf("���� to ȭ�� : %.2f", f);

	return 0;
}*/
#include <stdio.h>

void main()
{
	int a = 5 + 3;
	a = 4 + 7;
	printf("%d \n", a);
	float b = 3.2f + 4.7f;
	printf("%f \n", b);

	// ���� 1-1
	// ������ �̸� width, height, length ������ ���� �� �ִ� ���� ����
	int width = 12;
	int height = 10;
	int length = 8;

	// ���� 1-2. �� ���� ���� ��(����) Volume ������ �����ϼ���
	int Volume = width * height * length;
	// ���� 1-3. Volume / 165�� ������ ���ϴ� ��� ���� ���Ѵ�. Printf �Լ��� ����ϼ���.
	Volume = (Volume + 164) / 165;

	float Volume_f = width * height * length;
	Volume_f = Volume_f / 165;

	printf("���� 3�� �� : %d \n", Volume);
	printf("���� 3- : %f \n", Volume_f);

	// ���� 2-1  ����, ȭ�� 
	// ȭ�� = 9/5 * ���� + 32
	// ȭ���� �Ǽ��� ǥ���� �� �ֵ��� ������ �������ּ���.
	// 9/5�� ���� 1�� �ƴ� 1.8�� ���;� �մϴ�.
	// ���� 1, ȭ�� 33.8

	float Celsius = 1.5f;			     	    // ����
	float Fahrenheit = 9.0f / 5.0f * Celsius + 32;	// ȭ��

	printf("���� to ȭ�� : %.3f", Fahrenheit);
}
