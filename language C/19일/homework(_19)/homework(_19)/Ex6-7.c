#include <stdio.h>

void func2() {
	int sum = 0;
	static int sum2 = 0; //static ��������. �� 1���� �����. ���������� ������ ���. �׷��� ���������� ���� �Լ� �������� ���ȴ�.

	sum = sum + 10  ;
	sum2 = sum2 + 10;
	printf("sum : %d, sum 2: %d\n", sum, sum2);



}

void main() {

	func2();
	func2();
	func2();

}