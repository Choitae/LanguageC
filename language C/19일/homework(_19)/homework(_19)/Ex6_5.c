#include <stdio.h>
int a = 5; // ��������(� �Լ����� �ҼӵǾ� ���� ���� ����). �Ķ���ʹ� ���������� ������.

void func(int b) {
	a = 20;
	b = 20;
	printf("a: %d, b : %d\n", a, b);

}

void main() {
	int b;
	a = 10;
	b = 10;
	printf("a: %d, b : %d\n", a, b);
	func(b);
	printf("a: %d, b : %d\n", a, b);



}