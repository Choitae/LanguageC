#include <stdio.h>

void f1() { // 리턴값이 없는 함수를 정의할 떄 VOID라고 쓴다
	printf("f1 함수가 호출됨 \n");
}

void main() { // 우리 프로그램은 main함수를 메인으로 돌림.
	f1(); //함수를 "호출"
	f1();
	f1();


}