#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char name[100]; // char �迭�� ���� ������ name[] �������� ���� �Ѵ�. �� ��� %s�� ���� ��.
	printf("�̸��� �Է��ϼ��� : ");
    scanf("%s", &name);
	int birth_y, today_y;
	printf("�¾ ������ �Է� : ");
	scanf("%d", &birth_y);
	printf("���� ������ �Է� : ");
	scanf("%d", &today_y);
	printf("%s ���� ���� %d�� �Դϴ�.", name, today_y - birth_y); // �� s�� �ȵǴ°�?




}