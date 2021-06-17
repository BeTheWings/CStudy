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
int compareByWriter(const void* b1, const void* b2);
int compareByTitle(const void* b1, const void* b2);
int compareByPrice(const void* b1, const void* b2);
void PrintContacts(const BOOK* book, int count);

int main(void) {


	BOOK* book = NULL;
	
	int counter = 0;
	int count = 10;
	book = AllocateBooks(count);
	BOOK* pos;

	int select = 1;
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
			PrintContacts(book, count);
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
			pos = (BOOK*)bsearch(key, book, count, sizeof(BOOK), compareByWriter);

			if (pos != NULL) {
				printf("%s�� �ۼ��� å�� %s�̸� ������ %d�Դϴ�.\n", pos->writer, pos->title, pos->price);
			}
			else {
				printf("%s�� ���� �����Դϴ�.\n", key);
			}
			break;
		case 3:
			printf("�������� �Է����ּ���\n");
			getchar();
			gets(key);
			pos = (BOOK*)bsearch(key, book, count, sizeof(BOOK), compareByTitle);

			if (pos != NULL) {
				printf("%s�� �ۼ��� �۰��� %s�̸� ������ %d�Դϴ�.\n", pos->title, pos->writer, pos->price);
			}
			else {
				printf("%s�� ���� �����Դϴ�.\n", key);
			}

			break;
		case 4:

			qsort(book, count, sizeof(*book), compareByPrice);

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
int compareByWriter(const void* b1, const void* b2) {

	const BOOK* B1 = (const BOOK*)b1;
	const BOOK* B2 = (const BOOK*)b2;

	return strcmp(B1->writer, B2->writer);
}

int compareByTitle(const void* b1, const void* b2) {
	const BOOK* B1 = (const BOOK*)b1;
	const BOOK* B2 = (const BOOK*)b2;

	return strcmp(B1->title, B2->title);
}


int compareByPrice(const void* b1, const void* b2) {
	const BOOK* B1 = (const BOOK*)b1;
	const BOOK* B2 = (const BOOK*)b2;


	return (B1->price - B2->price);
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
void PrintContacts(const BOOK* book, int count)
{
	int i;

	printf(" --- ��ü ���� ��� ---\n");
	for (i = 0; i < count; i++)
	{
		printf("%-16s %-16s %d\n", book[i].writer, book[i].title, book[i].price);
	}
}