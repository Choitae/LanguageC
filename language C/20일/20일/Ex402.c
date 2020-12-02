#include <stdio.h>

void main() {
	// for.
	for(int i=1; i<=5; i++) {    // i : 1 ~ 5
		printf("%d ", i);
	}
	printf("\n");

	// while.
	int i = 1;
	while(i <= 5) {
		printf("%d ", i);
		i++;
	}
	printf("\n");

	// do-while.
	i = 1;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 5);
	printf("\n");

}