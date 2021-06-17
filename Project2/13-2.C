#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct information {
	char name[40];
	int age;
}Information;

Information* AllocateInformation(int count);
int compareByAge(const void* a1, const void* a2);
void InputInformation(Information* info, int count);
int main(void) {
	Information* information = NULL;
	int count = 0;
	int counter = 0;

	printf("최대 저장가능한 정보의 개수를 입력해주세요.\n");
	scanf("%d", &count);
	while (getchar() != '\n');
	information = AllocateInformation(count);
	int select = 0;
	while (1) {

		printf("1.정보입력\n");
		printf("2.나가기\n");
		scanf("%d", &select);

		switch (select) {
		case 1:
			if (counter == count) {
				printf("더이상의 정보를 저장할 수 없습니다.");
			}
			else {
				while (getchar() != '\n');
				InputInformation(information,counter);
				counter = counter + 1;
			}
			break;
		case 2:
			qsort(information, count, sizeof(Information), compareByAge);
			printf("입력된 정보중 가장 많은 나이를 가진 사람은 %s이며 나이는 %d입니다.\n", information->name, information->age);
			free(information);
			exit(0);
			break;
		}

	}


	return 0;
}


void InputInformation(Information* information, int counter)
{
	printf("이름:");
	gets(information[counter].name);
	printf("가 격 :");
	scanf("%d", &information[counter].age);
}

Information* AllocateInformation(int count)
{
	Information* result = NULL;
	result = (Information*)malloc(sizeof(Information) * count);
	if (result == NULL)
		printf("동적 메모리 할당 실패\n");
	else
		memset(result, 0, sizeof(Information) * count);
	return result;
}

int compareByAge(const void* a1, const void* a2) {
	const Information* A1 = (const Information*)a1;
	const Information* A2 = (const Information*)a2;

	return (A2->age - A1->age);
}