#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define CHARGE 3000

// Ex2-8_9 : ���ð��� �Է¹ް�, ���(=���ð�*�ð�����)�� ���.
// ��� '�ð�����' : 2000 -> 3000
void main ( ) {
	int hours;    // ���ð�
	printf ( "���ð��� �Է� : " );
	scanf ( "%d", &hours );

	printf ( "����� : %d��\n", hours * CHARGE );
}
/*
[����]	C���� '���' ����:
	1) const Ű����
	2) #define 
*/

