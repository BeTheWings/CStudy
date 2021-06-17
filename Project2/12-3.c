#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct login_info {
	char id[20];
	char password[20];

}LOGIN_INFO;
compareByID(const void* login1, const void* login2);
compareByPassWord(const void* login1, const void* login2);

int main(void) {

	FILE* fp;
	LOGIN_INFO* login_info = NULL; 
	LOGIN_INFO*result1 = NULL;
	LOGIN_INFO* result2 = NULL;

	LOGIN_INFO information;
	int count = 0;
	int counter = 0;
	char id[20];
	char pw[20];
	fp = fopen("password.txt", "r");
	if (fp == NULL) {
		printf("�ش������� �����ϴ�.");
	}
	else {
		fscanf(fp, "%d\n", &count);
	}
	if (login_info==NULL) {

		login_info = (LOGIN_INFO*)malloc(sizeof(LOGIN_INFO) * count);
	}
	else {
		memset(login_info, 0, sizeof(LOGIN_INFO) * count);
	}
	for (int i = 0;i < count;i++) {
		fscanf(fp, "%s %s\n", login_info[i].id, login_info[i].password);
}
	fclose(fp);

	while (1) {
		printf("1. �α����ϱ�\n");
		printf("2. ������\n");
		int select;
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("���̵� �Է����ּ���\n");
			getchar();
			gets(information.id);
			qsort(login_info, count, sizeof(LOGIN_INFO), compareByID);
			result1 = bsearch(&information, login_info, count, sizeof(LOGIN_INFO), compareByID);
			if (result1 != NULL) {
				printf("��й�ȣ�� �Է����ּ���\n");
				gets(information.password);
				qsort(login_info, count, sizeof(LOGIN_INFO), compareByPassWord);
				result2 = bsearch(&information, login_info, count, sizeof(LOGIN_INFO), compareByPassWord);
				if (result2 != NULL) {
					printf("�α��� ����\n");
					break;
				}else {
					printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");
				}
			}
			else {
				printf("���̵� ��ġ���� �ʽ��ϴ�.\n");
			}
			break;
		case 2:
			printf("���α׷��� �����մϴ�.\n");
			free(login_info);
			login_info = NULL;
			exit(0);
			break;
		}
	}
	return 0;
}

int compareByID(const void* login1, const void* login2) {
	const LOGIN_INFO* id1 = (const LOGIN_INFO*)login1;
	const LOGIN_INFO* id2 = (const LOGIN_INFO*)login2;

	return strcmp(id1->id, id2->id);
}

int compareByPassWord(const void* password1, const void* password2) {
	const LOGIN_INFO* pw1 = (const LOGIN_INFO*)password1;
	const LOGIN_INFO* pw2 = (const LOGIN_INFO*)password2;

	return strcmp(pw1->password, pw2->password);

}