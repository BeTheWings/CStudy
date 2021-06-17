#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book {
	char title[40];
	char writer[20];
	int price;
}BOOK;

BOOK* AllocateBooks(int count);
void InputBookInfo(BOOK* contacts, int count);
int compareByPrice(const void* b1, const void* b2);

int main(void) {


	BOOK* book = NULL;
	int count = 0;
	int counter = 0;

	printf("�ִ� ���尡���� å�� ������ �Է����ּ���\n");
	scanf("%d", &count);
	while (getchar() != '\n');
	book = AllocateBooks(count);
	BOOK* pos;

	int select = 1;
	int found = -1;
	char key[40] = { 0 };
	while (select) {
		printf("1. �����Է�\n");
		printf("2. ���ں��˻�\n");
		printf("3. ����˻�\n");
		printf("4. ���� ������ ����\n");
		printf("5. ��\n");
		scanf("%d", &select);
		switch (select)
		{

		case 1:
			if (counter == count) {
				printf("���̻��� å ������ �Է��� �� �����ϴ�.\n");
			}
			else {

				if (book == NULL) {
					return -1;
				}
				while (getchar() != '\n');
				InputBookInfo(book, counter);
				counter = counter + 1;
			}
			break;
		case 2:
			printf("���ڸ��� �Է����ּ���\n");
			getchar();
			gets(key);

			for (int i = 0;i < counter;i++) {
				if (strcmp(key, book[i].writer) == 0) {
					found = i;
				}
			}
			if (found == -1) {
				printf("%s�� ���� �����Դϴ�.\n", key);
			}
			else {
				printf("%s�� �ۼ��� å�� %s�̸� ������ %d�Դϴ�.\n", key, book[found].title, book[found].price);
			}

			break;
		case 3:
			printf("�������� �Է����ּ���\n");
			getchar();
			gets(key);

			for (int i = 0;i < counter;i++) {
				if (strcmp(key, book[i].title) == 0) {
					found = i;
				}
			}
			if (found == -1) {
				printf("%s�� ���� �����Դϴ�.\n", key);
			}
			else {
				printf("%s�� å�� %s�� �ۼ��߰� ������ %d�Դϴ�.\n", key, book[found].writer, book[found].price);
			}

			break;
		case 4:
			qsort(book, count, sizeof(BOOK), compareByPrice);
			printf("���ĵ� ���� ����\n");
			for (int i = 0;i < counter;i++) {
				printf("%d\n", book[i].price);
			}
			break;
		case 5:
			free(book);
			book = NULL;
			select = 0;
			break;
		default:
			printf("�߸��� �Է��Դϴ�.");
			break;
		}
	}

	return 0;
}

int compareByPrice(const void* b1, const void* b2) {
	const BOOK* B1 = (const BOOK*)b1;
	const BOOK* B2 = (const BOOK*)b2;

	if (((B1->price == B2->price))) {
		return 0;
	}
	else if ((B1->price < B2->price)) {
		return 1;
	}
	else if ((B1->price > B2->price)) {
		return -1;
	}
}
BOOK* AllocateBooks(int count)
{
	BOOK* result = NULL;
	result = (BOOK*)malloc(sizeof(BOOK) * count);
	if (result == NULL)
		printf("���� �޸� �Ҵ� ����\n");
	else
		memset(result, 0, sizeof(BOOK) * count);
	return result;
}

void InputBookInfo(BOOK* books, int count)
{
	printf("���� :");
	gets(books[count].writer);
	printf("å ���� :");
	gets(books[count].title);
	printf("�� �� :");
	scanf("%d", &books[count].price);
}
