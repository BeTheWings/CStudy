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
	if (login_info == NULL) {
		login_info = (LOGIN_INFO*)malloc(sizeof(LOGIN_INFO) * count);
	}
	else {
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
			fp = fopen("password.dat", "wb");
			if (fp == NULL) {
				printf("�ش������� �����ϴ�.\n");
			}
			fprintf(fp, "%d\n", count);
			fwrite(login_info, sizeof(LOGIN_INFO) * count, count, fp);
			break;
		}
	}
	printf("���������� ����Ǿ����ϴ�.");
	fclose(fp);


	return 0;
}

