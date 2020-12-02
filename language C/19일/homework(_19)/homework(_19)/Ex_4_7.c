#include <stdio.h>

void main() {
	int a, b;
	a = 3; // 00000011
	b = a << 2; // a 값을 왼쪽으로 2bit씩 shift(이동) // 00001100
	printf("%d\n", b); // 4 + 8 = 12

	b = a >> 1; // a의 갑을 오른쪽으로 1비트씩 shift
	printf("%d\n",b); // 00000001 = 1



}