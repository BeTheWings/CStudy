#include<stdio.h>
#include<string.h>
#define Max 100
void Encrypt(char *arr);

int main(void) {
	char str[Max];
	printf("영어단어를 입력해주세요\n");
	gets(str);

	Encrypt(str);
}
void Encrypt(char *str) {
	int i;
	for(i =0;i<Max;i++){
		if (str[i] >= 'b' && str[i] <= 'y') {
			str[i] = str[i] + 1;
		}
		else if(str[i]=='a'){
			str[i] = str[i] + 25;
		}
		else if (str[i] == 'z') {
			str[i] = str[i] - 25;
		}
		else if (str[i] >= 'B' && str[i] <= 'Y') {
			str[i] = str[i] + 1;
		}
		else if (str[i] == 'A') {
			str[i] = str[i] + 25;
		}
		else if (str[i] == 'Z') {
			str[i] = str[i] - 25;
		}
	}
	printf("암호화된 문자열은 %s입니다.",str);

}