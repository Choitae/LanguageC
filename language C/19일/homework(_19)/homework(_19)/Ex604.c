#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	
//	char str[10] = "Hello";
//	printf("%s", str);
	char s[10];
	int n;

	scanf("%d", &n); // n의 주소값을 넣어야 하기 떄문이 &를 사용.
	scanf("%s", s); // 배열 s 자체가 주소값이기 떄문에 &를 넣지 않음

	s[2] = 0; // s의 3번쨰 방에 널문자를 입력

	printf("n : %d\n", n);
	printf("s : %s\n", s); // 0인 널문자가 있는 곳 이전 까지 출력이 된다.

}

