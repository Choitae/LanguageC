#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_1 = 0; // 짝수
int count_2 = 0; // 홀수
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
	printf("숫자를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	count(a, b);
	printf("%d부터 %d까지의 정수 중 짝수 : %d개, 홀수 %d개", a, b, count_1, count_2);



}