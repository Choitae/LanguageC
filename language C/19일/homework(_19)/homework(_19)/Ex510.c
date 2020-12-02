#include <stdio.h>

void print_stars(int a, int b) {
	for (int i = a; i <= b; i++) {
		for (int n = 1; n <= i; n++) {
			printf("*");

		}
		printf("\n");

	  }


}

void main() {
	print_stars(2, 5);



}