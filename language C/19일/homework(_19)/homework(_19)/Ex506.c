#include <stdio.h>

//�Ķ���� + ���� �ϴ� �Լ�.

int f(int n) { // ��ȣ �ȿ� ������ ���� --> �Ķ����
	n++;
	return n;




}


void main() {
	int num = 2;
	num = f(num);
	printf("num : %d\n", num); // 3(����)

	num = f(num);
	printf("num : %d\n", num);


}