#include <stdio.h>

//����� ���ϴ� avg�Լ� �����
float avg(int a, int b) {
	float ret;
	ret = (a + b) / 2.0f;
	return ret;

}

void main() {
	int num1, num2;
	printf("�� ������ �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d�� %d�� ��� : %.2f\n", num1, num2, avg(num1, num2));



}