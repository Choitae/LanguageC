#include <stdio.h>

int my_sum2(int a, int b) { // ���� ���� �� �׻� �ʱ�ȭ ��ų �� .
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;

	}
	return sum;

}

void main() {
	printf("1���� 4������ �� : %d", my_sum2(1, 4));


}