#include <stdio.h>

int is_prime(int num) {
	int count = 0;
	for (int i = 1; i <= num; i++) {

		if (num % i == 0)
			count ++;
		
	}
	if (count == 2)
		return 1;
	/*else*/return 0;

}

void show_primes(int a, int b) {
	
	for (int i = a; i <= b; i++) {
		if (is_prime(i) == 1) {
			printf("%d ", i);
		}

	}


}



void main() {


	show_primes(1, 100);

}