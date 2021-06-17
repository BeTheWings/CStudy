#include<stdio.h>
#include<string.h>
#define Max 100
char str[Max];
char *p;
int main(void) {
	p = str;
	int count;
	printf("문자열을 입력해주세요\n");
	gets(str);
	count = strlen(str);
	for (int i = count-1;i >= 0;i--) {
		printf("%c", p[i]);
	}
	printf("\n");
	return 0; 
}