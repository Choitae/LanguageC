#include <stdio.h>

// ����: �ڷ��� --> �� �ڷ����� ǥ���� �� �ִ� ������ ������ ����.
// (ex) char(1����Ʈ) ---> -128 ~ 127
void main ( ) {
	char ch = 127;     // 01111111
	printf ( "%d\n", ch );
	ch = ch + 1;       // 10000000  ----> 128�� �ƴ� -128�� �Ǿ���:
						                  // "overflow"(����)
	printf ( "%d\n", ch );  // -128
	ch = ch - 1;
	printf ( "%d\n", ch );  // 127		  // "underflow"(����)
}




