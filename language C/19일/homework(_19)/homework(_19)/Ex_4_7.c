#include <stdio.h>

void main() {
	int a, b;
	a = 3; // 00000011
	b = a << 2; // a ���� �������� 2bit�� shift(�̵�) // 00001100
	printf("%d\n", b); // 4 + 8 = 12

	b = a >> 1; // a�� ���� ���������� 1��Ʈ�� shift
	printf("%d\n",b); // 00000001 = 1



}