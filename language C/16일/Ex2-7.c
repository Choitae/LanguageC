//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 반지름을 입력 --> 원의 넓이.
void main ( ) {
	const float PI = 3.14;     // 또는 3.14f
	int r;    // 반지름 

	printf ( "반지름 입력 : " );
	scanf_s ( "%d", &r );

	printf ( "원의 넓이 : %f\n", PI * r * r );
}
/*
1. const키워드 ---> 변수의 상수화.
2. scanf() ---> 변수 이름 앞에 &(ampersand)를 붙인다.

*/



