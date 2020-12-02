#include <stdio.h>

void main() {
	// 문자 변수 선언.
	char a, b, c;

	// 한 문자를 입력받아 문자 변수 a에 기억.
	a = getchar();
	putchar(a);  // 한 문자 출력.

	// 한 문자를 입력받아 문자 변수 b에 기억.
	b = getchar();
	putchar(b);  // 한 문자 출력.

	// 한 문자를 입력받아 문자 변수 c에 기억.
	c = getchar();
	putchar(c);  // 한 문자 출력.

	// 실행1 : abc(엔터)
	// 실행2 : a(엔터)b(엔터)
}