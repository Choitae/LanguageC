#include <stdio.h>

void main ( ) {
	int a = 7, b, c;
	float d = 3.5;

	// 정수 * 실수 ------> (정수를 실수로 자동 형 변환 후 연산)
	b = a * d;

//	printf ( "%d", b );  // 24 (이해)

//	printf ( "%d", a * d );		// 이러지 마세요.
	printf ( "%d", a * ( int )d );   // 실수 -> 정수 : 소수점 이하를 잃어버림.
}



