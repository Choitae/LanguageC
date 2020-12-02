//정수를 입력받고 6의 배수를 그만큼 출력
// 0이 입력될떄까지 입력되는 정수의 총합 구하기
// 정수 입력받고 구구단 역순으로 출력
//입력 개수를 입력받고, 해당 횟수만큼 반복하면서 정수를 입력 받아, 받은 정수의 평균을 소수점 둘쨰자리까찌 출력; %2.f

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*int num ;
	printf("정수 입력 : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("%d ", 6 * i);
	}
	*/
	/*
	int num;
	int sum = 0;
	
	while (1) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &num); 
		if (num == 0)
			break;
		sum += num;




	}
	printf("총합 : %d", sum);

	*/
	/*
	int num;
	printf("정수를 입력 : ");
	scanf("%d", &num);
	for (int i = 9; i > 0; i--) {
		printf("%d * %d = %d\n", num, i, num * i);


	}
	*/
	int score = 0; //입력 개수
	int num = 0; //숫자
	float sum = 0;
	printf("입력 개수 : ");
	scanf("%d", &score);
	for (int i = 1; i <= score; i++) {
		printf("정수를 입력 : ");
		scanf("%d", &num);
		sum += num;


	}
	printf("평균값은 : %.2f", sum / score);

}
