#include<stdio.h>
/*아스크 코드 값을 입력 받아 그 ASCII 코드 값에 해당하는 문자를 출력하는 프로그램을 작성하시오*/
int main(void) {

	int asciiVal;

	printf("ASCHII 코드 값을 입력하세요:");
	scanf("%d", &asciiVal);
	printf("ASCHII 코드 %d에 해당하는 값은 %C입니다.\n", asciiVal, asciiVal);
	return 0;
}