#include "lectures.h"

int compare(int a,int b) {
	if (a > b) {
		return a;
	}
	if (a < b) {
		return b;
	}
}

int absolute(int num) {
	if (num < 0)
		num = -num;
	else
		num = num;
	return num;
}

int abcompare(int num1, int num2) {
	int n1=absolute(num1);
	int n2=absolute(num2);
	int result=compare(n1, n2);
	return result;
}

void lecture14_2() {
	int a=absolute(-14);
	printf("%d\n", a);
	int b = compare(1, 0);
	printf("%d\n", b);
	int c = abcompare(-14, -16);
	printf("%d\n", c);
}