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
	printf("������ �Է� : ");
	scanf("%d", &num);
	cipher(num);
	printf("%d�� %d �ڸ����̴�", num, count);
	
}