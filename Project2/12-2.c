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

	printf("�ִ� ���� ������ ������ ������ �Է����ּ���\n");
	scanf("%d", &count);
	while (getchar() != '\n');
	if(login_info==NULL){
	login_info = (LOGIN_INFO*)malloc(sizeof(LOGIN_INFO)* count);
	}else {
		memset(login_info, 0, sizeof(LOGIN_INFO) * count);
	}

	while (1) {
		if (counter != count) {
		printf("���̵� �Է����ּ���\n");
		gets(login_info[counter].id);
		printf("��й�ȣ�� �Է����ּ���\n");
		gets(login_info[counter].password);
		counter = counter + 1;
		}
		else {
			printf("���̻��� ��й�ȣ�� ������ �� �����ϴ�.");
			break;
		}
	}
	fp = fopen("password.txt", "w+");
	if (fp == NULL) {
		printf("�ش������� �����ϴ�.\n");
	}
	fprintf(fp, "%d\n", count);
	for (int i = 0;i < count;i++) {
		fprintf(fp, "%s %s\n", login_info[i].id, login_info[i].password);
	}
	printf("���������� ����Ǿ����ϴ�.");
	fclose(fp);

	
	return 0;
}

