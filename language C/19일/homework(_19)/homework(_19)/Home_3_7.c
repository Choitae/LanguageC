#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char name[100]; // char 배열을 받을 떄에는 name[] 형식으로 들어가야 한다. 입 출력 %s로 받을 것.
	printf("이름을 입력하세요 : ");
    scanf("%s", &name);
	int birth_y, today_y;
	printf("태어난 연도를 입력 : ");
	scanf("%d", &birth_y);
	printf("현재 연도를 입력 : ");
	scanf("%d", &today_y);
	printf("%s 님은 현재 %d세 입니다.", name, today_y - birth_y); // 왜 s가 안되는가?




}