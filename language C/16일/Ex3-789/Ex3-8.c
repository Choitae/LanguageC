#include <stdio.h>

void main() {
	// 문자 변수 선언.
	char a, b, c;

	printf("입력 : ");
	// 한 문자와 <Enter>를 입력받아, 한 문자를 변수 a에 기억.
	a = getch();  // a(엔터)
	getch();

	// 한 문자와 <Enter>를 입력받아, 한 문자를 변수 b에 기억.
	b = getch();
	getch();

	// 한 문자와 <Enter>를 입력받아, 한 문자를 변수 c에 기억.
	c = getch();
	getch();

	printf("\n출력 : ");
	putch(a);
	putch(b);
	putch(c);

	// 실행 : a(엔터)b(엔터)c(엔터)
}