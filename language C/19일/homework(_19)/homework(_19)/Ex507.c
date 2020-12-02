#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;

}

void main() {
	int num1 = add(5, 3);
	int num2 = sub(5, 3);
	printf("%d, %d\n", num1, num2);


}