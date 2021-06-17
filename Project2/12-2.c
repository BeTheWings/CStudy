#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct login_info {
	char id[20];
	char password[20];

}LOGIN_INFO;

int main(void) {

	FILE* fp;
	LOGIN_INFO* login_info = NULL;
	int count = 0;
	int counter = 0;

	printf("최대 저장 가능한 정보의 개수를 입력해주세요\n");
	scanf("%d", &count);
	while (getchar() != '\n');
	if(login_info==NULL){
	login_info = (LOGIN_INFO*)malloc(sizeof(LOGIN_INFO)* count);
	}else {
		memset(login_info, 0, sizeof(LOGIN_INFO) * count);
	}

	while (1) {
		if (counter != count) {
		printf("아이디를 입력해주세요\n");
		gets(login_info[counter].id);
		printf("비밀번호를 입력해주세요\n");
		gets(login_info[counter].password);
		counter = counter + 1;
		}
		else {
			printf("더이상의 비밀번호를 저장할 수 없습니다.");
			break;
		}
	}
	fp = fopen("password.txt", "w+");
	if (fp == NULL) {
		printf("해당파일이 없습니다.\n");
	}
	fprintf(fp, "%d\n", count);
	for (int i = 0;i < count;i++) {
		fprintf(fp, "%s %s\n", login_info[i].id, login_info[i].password);
	}
	printf("정상적으로 저장되었습니다.");
	fclose(fp);

	
	return 0;
}

