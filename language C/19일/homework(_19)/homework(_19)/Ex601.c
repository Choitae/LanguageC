#include <stdio.h>


int fact(int n) {

	if (n == 1) 
		return 1;
	return n*fact(n-1);


}


void main() {
	int num = 5;
	printf("%d! : %d\n", num, fact(num));



}