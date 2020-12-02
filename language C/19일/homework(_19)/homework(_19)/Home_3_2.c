#include <stdio.h>

void main() {
	int a = 5;
	int b = 3;
	int c;
	printf("\t a값,\tb값,\t표현식,\t결과\n");
	printf("\t %d,\t%d,\ta+=b,\ta = %d\n", a, b, c= a+b);
	printf("\t %d,\t%d,\ta-=b-2,\ta = %d\n", a, b, c -= b-2);
	printf("\t %d,\t%d,\ta*=b*5,\ta = %d\n", a, b, c*=b*5);
	printf("\t %d,\t%d,\ta/=a/b,\ta = %d\n", a, b, c/=a/b);
	printf("\t %d,\t%d,\ta%%=b,\ta = %d\n", a, b, c%=b);




}