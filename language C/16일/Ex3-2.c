#include <stdio.h>

void main ( ) {
	int a = 12345;
	float pi = 3.141592;

	printf ( "%10d.\n", a );
	printf ( "%3d.\n", a );
	printf ( "%10.2f.\n", pi );  // %.2f ---> �Ҽ��� ��°�ڸ�����(�ݿø�)
	printf ( "%3.2f.\n", pi );
}