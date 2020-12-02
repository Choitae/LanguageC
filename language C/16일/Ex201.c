#include <stdio.h>

// 보충: 자료형 --> 각 자료형은 표현할 수 있는 범위가 정해져 있음.
// (ex) char(1바이트) ---> -128 ~ 127
void main ( ) {
	char ch = 127;     // 01111111
	printf ( "%d\n", ch );
	ch = ch + 1;       // 10000000  ----> 128이 아닌 -128이 되었음:
						                  // "overflow"(참고)
	printf ( "%d\n", ch );  // -128
	ch = ch - 1;
	printf ( "%d\n", ch );  // 127		  // "underflow"(참고)
}




