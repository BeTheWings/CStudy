#include<stdio.h>
#include<string.h>
#define Max 100
void makeUpper(char * arr);
void makeLower(char* arr);


int main(void) {
	char input[Max];
	int count;

	while(1) {
		printf("문자열을 입력해주세요 ex)abcdef\n");
		gets(input);
		count = strlen(input);
	
		if (count-1 != -1) {
			makeUpper(input);
			makeLower(input);
		}
		else if (count - 1 == -1) {
			break;
		}
		
	}
	return 0;

}
void makeUpper(char *str1) {

	for (int i = 0;i<Max;i++) {
		if (str1[i] >= 'a' && str1[i] <= 'z') {
			str1[i] = str1[i] - 32;
		}
	
	}
	printf("문자열 대문자 변환%s\n", str1);
};
void makeLower(char *str1) {
	for (int i = 0;i < Max;i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] = str1[i] + 32;
		}		
	}
	printf("문자열 소문자 변환%s\n", str1);
};