#include <stdio.h>

// Ex5-7: for�� --> 1���� 100������ ���� ���.
void main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("1���� 100������ �� : %d\n", sum);
}