#include <stdio.h>

void main() {
	/*1부터 4까지의 누적합.
	int sum = 0;
	for (int i = 1; i <= 4; i++) {
		sum = sum + i;



	}
	printf("1부터 4까지의 합계 : %d", sum);
	*/

	//합이 200보다 커지게 되는 경우는 1부터 ---까지 합쳤을 때.
	int sum = 0, i;
	for ( i = 1; i <= 100; i++) {
		sum = sum + i;
		if (sum > 200)
			break;
	}
	printf("합이 200보다 커지게 되는 경우는 1부터 %d까지 합했을 때", i);
	printf("(합 : %d)", sum);
}