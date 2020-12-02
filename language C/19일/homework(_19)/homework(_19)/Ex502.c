#include <stdio.h>

void main() {
	int n = 4;
	//1부터 7까지를 출력하되 n까지만 출력
	for (int i = 1; i <= 7; i++) {
		printf("%d", i);
		if (i == n) {
			printf("\n");
     		break; // 반복문을 돌면서 i==n일떄 for문을 탈줄
	    }
	}

	for (int i = 1; i <= 7; i++) {
		if (i == n)
			continue; // 반복문 안에서 특정한 순간을 만났을 떄는 다음 회차부터 계속 실시하겠다는 의미.
		              // (for문은 특정 반복회차를 스킵한다, while문은 조건문 보고 특정 조건으로 이동) 
		printf("%d ", i);
		

	}

	//1부터 7까지를 출력하되 n만 제되하고 출력
}