#include <stdio.h>

int main() {
	int num1,num2; // 사용자한테 입력을 받는 변수
	int result;

	scanf("%d %d", &num1, &num2);

	result = num1 + num2;

	printf("%d", result);

	return 0;
}
