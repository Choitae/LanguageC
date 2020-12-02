#include <stdio.h>
// extern으로 다른 파일에 선언된 변수 a, b를 호출
extern int a, b;
// extern으로 다른 파일에 정의된 함수를 이 파일에서 사용.	
extern void sum();

void main() {
	printf("2개의 정수 입력");
	scanf_s("%d %d", &a, &b);
	sum();
	// Ex6-9의 sum에 Ex6-8의 a,b를 가져가서 실행.

}