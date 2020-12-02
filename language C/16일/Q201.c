#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//(실행결과)입력 : 66 (엔터)
//			출력 : 66
//					B
void main ( ) {
	int ch;

	printf ( "입력 : " );
	scanf ( "%d", &ch );

	printf ( "%d\n%c", ch, ch );
}



