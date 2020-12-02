#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define CHARGE 3000

// Ex2-8_9 : 사용시간을 입력받고, 요금(=사용시간*시간당요금)을 계산.
// 상수 '시간당요금' : 2000 -> 3000
void main ( ) {
	int hours;    // 사용시간
	printf ( "사용시간을 입력 : " );
	scanf ( "%d", &hours );

	printf ( "사용요금 : %d원\n", hours * CHARGE );
}
/*
[정리]	C언어에서 '상수' 선언:
	1) const 키워드
	2) #define 
*/

