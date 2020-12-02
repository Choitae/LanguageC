#include <stdio.h>

void main() {
	int i = 0;
	do {
		i++;
		printf("do-while 반복 실행중. i=%d\n", i);
	} while (i < 4);
}