#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_1 = 0; // ¦��
int count_2 = 0; // Ȧ��
int count_3 = 0;
void count(int a, int b) {
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			count_1++;
		}
			
		else{
			count_2++;

		}
	
	
	}
	

}
void main() {
	int a, b = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	count(a, b);
	printf("%d���� %d������ ���� �� ¦�� : %d��, Ȧ�� %d��", a, b, count_1, count_2);



}