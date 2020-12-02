#include <stdio.h>

void main ( ) {
	int a = 10, b = 10, c, d;

	c = --a;

	d = a--;

	printf ( "%d %d %d %d\n", a, b, c, d );
}