//������ �Է¹ް�(a), printf("%s��", isEven(a)==1? "¦��" : "Ȧ��");

#include <stdio.h>

int isEven(int num) {
	if (num % 2 == 0) {
		return 1;
	}
	else
		return 0;

	
}

void main() {
	int a;
	printf("���� �Է� : ");
    scanf_s("%d", &a);

	printf("%s��", isEven(a) == 1 ? "¦��" : "Ȧ��");



}