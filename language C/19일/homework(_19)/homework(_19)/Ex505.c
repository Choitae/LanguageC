#include <stdio.h>

int ret10() { // 리턴타입 " int
	return 10; // 10 ---> '리턴값' (int타입 ---> 따라서 이  함수의 리턴타입은 int)
}

void main() {
	printf("ret10 함수의 호출결과 : %d\n", ret10()); //데이터의 자리에 함수 호출표현이 옴. 함수가 실행이 되면서 나오는 값을 데이터로 치환하겠다는 것.

	int n = ret10() * ret10() + ret10();
	printf("n : %d\n", n);  // 


}