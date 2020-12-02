#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num = 0;
int count = 1;
int tenp_p = 0;
int sum = 0;

/*void cipher(int a) {
	while (a >=10) {
		a /= 10;
		count++;
		
		if (a <10)
			break;
	}

}
*/

void tenp(int a) {
	while (a >= 10) {
		if (count == 0 || (a >= 10 && a < 100)) {
			sum += a % 10;
		}
		a /= 10;
		count++;

		if (a < 10) {
			break;
		}
	}
}
void main() {
	printf("정수를 입력 : ");
	scanf("%d", &num);
	cipher(num);
	printf("%d는 %d 자리수이다", num, count);
	
}