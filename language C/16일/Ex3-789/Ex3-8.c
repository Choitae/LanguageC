#include <stdio.h>

void main() {
	// ���� ���� ����.
	char a, b, c;

	printf("�Է� : ");
	// �� ���ڿ� <Enter>�� �Է¹޾�, �� ���ڸ� ���� a�� ���.
	a = getch();  // a(����)
	getch();

	// �� ���ڿ� <Enter>�� �Է¹޾�, �� ���ڸ� ���� b�� ���.
	b = getch();
	getch();

	// �� ���ڿ� <Enter>�� �Է¹޾�, �� ���ڸ� ���� c�� ���.
	c = getch();
	getch();

	printf("\n��� : ");
	putch(a);
	putch(b);
	putch(c);

	// ���� : a(����)b(����)c(����)
}