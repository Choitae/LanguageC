#include <stdio.h>

void main ( ) {
	int a = 7, b, c;
	float d = 3.5;

	// ���� * �Ǽ� ------> (������ �Ǽ��� �ڵ� �� ��ȯ �� ����)
	b = a * d;

//	printf ( "%d", b );  // 24 (����)

//	printf ( "%d", a * d );		// �̷��� ������.
	printf ( "%d", a * ( int )d );   // �Ǽ� -> ���� : �Ҽ��� ���ϸ� �Ҿ����.
}



