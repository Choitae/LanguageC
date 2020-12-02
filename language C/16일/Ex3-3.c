#include <stdio.h>

void main ( ) {
	char str[10] = "Hello";

	printf ( "%10d.\n", 12345 );
	printf ( "%-10d.\n", 12345 );
	printf ( "%10s.\n", str );
	printf ( "%-10s.\n", str );
}
// 1. 형식지정자에 -가 쓰였을 경우의 이해.
// 2. char형 배열에 문자열을 저장할 수 있음을 이해.
// 3. 문자열을 출력할 때 %s와 '문자열의 이름'을 대응시킴을 이해.



