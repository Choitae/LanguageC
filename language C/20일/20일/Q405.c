#include <stdio.h>

//Q405.����: �� ������ �Է¹޾Ƽ�(a, b),
//a���� b������ ������ ��� ���� ����� ���.
//(������)�� ������ �Է� : 3 7 (����)"%d%d"
//25  			// 3+4+5+6+7

void main() {
	int a, b;
	printf("�� ������ �Է� : ");
	scanf_s("%d%d", &a, &b);

	if (a > b) {		// ����.
		int temp = a;
		a = b;
		b = temp;
	}

	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
		printf("%d", i);
		if (i < b) {
			printf("+");
		}
	}
	printf("=%d", sum);
}