#include <stdio.h>
// extern���� �ٸ� ���Ͽ� ����� ���� a, b�� ȣ��
extern int a, b;
// extern���� �ٸ� ���Ͽ� ���ǵ� �Լ��� �� ���Ͽ��� ���.	
extern void sum();

void main() {
	printf("2���� ���� �Է�");
	scanf_s("%d %d", &a, &b);
	sum();
	// Ex6-9�� sum�� Ex6-8�� a,b�� �������� ����.

}