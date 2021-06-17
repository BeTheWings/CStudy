#include<stdio.h>
int main(void) {
	char a;
	printf("문자를 입력하세요\n");
	scanf("%c", &a);
	printf("문자를 %c에 해당하는 아스키 코드 값은 %x입니다.\n", a,a);
	return 0;
}