#include<stdio.h>
#include<string.h>
#define Max 100
char str[Max];
char *p;
int main(void) {
	p = str;
	int count;
	printf("���ڿ��� �Է����ּ���\n");
	gets(str);
	count = strlen(str);
	for (int i = count-1;i >= 0;i--) {
		printf("%c", p[i]);
	}
	printf("\n");
	return 0; 
}