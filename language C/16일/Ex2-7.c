//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �������� �Է� --> ���� ����.
void main ( ) {
	const float PI = 3.14;     // �Ǵ� 3.14f
	int r;    // ������ 

	printf ( "������ �Է� : " );
	scanf_s ( "%d", &r );

	printf ( "���� ���� : %f\n", PI * r * r );
}
/*
1. constŰ���� ---> ������ ���ȭ.
2. scanf() ---> ���� �̸� �տ� &(ampersand)�� ���δ�.

*/



