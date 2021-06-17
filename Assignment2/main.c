#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "book.h"
#include "Filelo.h"
#include "menu.h"

int main(void) {
	BOOK* book = NULL;
	BOOK* temp = NULL;
	BOOK* result, writer, title;
	int count = 0;
	int counter = 0;
	int *cPoint = &count;
	int *ctPoint = &counter;
	
	loadBOOK(ctPoint, cPoint);	
	if (count == 0) {
		printf("�ִ� ���尡���� å�� ������ �Է����ּ���\n");
		scanf("%d", &count);
		while (getchar() != '\n');
		book = AllocateBooks(count);
	}else {
		book = AllocateBooks(count);
		loadBOOKInfo(book,counter,count);
	}
	int select = 1;
	char key[40] = { 0 };
	while (1) {
		printf("1. �����Է�\n");
		printf("2. ���ں��˻�\n");
		printf("3. ����˻�\n");
		printf("4. ���� ������ ����\n");
		printf("5. ��ü ���� ���� ���\n");
		printf("6. ��\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			if (counter == count) {
				printf("���̻��� å ������ �Է��� �� �����ϴ�.\n");
				int select2 = 0;
				printf("���� ������ ���Ͻø� 1���� �����ּ���\n");
				scanf("%d", &select2);
				switch (select2)
				{
				case 1:
					printf("�뷮�� �þ���ϴ�.\n");
					temp = book;
					count += count;
					int* resize = &count;
					book = (BOOK*)realloc(book, (sizeof(BOOK)* (*resize)));
					if (book == NULL) {
						book = temp;
					}
					break;
				default:
					printf("�޴��� ���ư��ϴ�.\n");
					break;
				}
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
			gets(writer.writer);
			qsort(book, count, sizeof(*book), compareByWriter);
			result = bsearch(&writer, book, count, sizeof(BOOK), compareByWriter);
			if (result != NULL) {
				printf("%s�� �ۼ��� å�� %s�̸� %d�� ������ ������ �ֽ��ϴ�.\n", result->writer, result->title, result->price);
				int select4 = 0;
				int location = result - book;
				printf("1.���� ���� ����\n");
				printf("2.���� ���� ����\n");
				scanf("%d", &select4);
				switch (select4)
				{
				case 1:
					printf("���� ���� ���� �޴��Դϴ�.\n");					
					while (getchar() != '\n');
					changeBookInfo(book, location);
					break;
				case 2:
					printf("�ش� ������ ���� �Ǿ����ϴ�\n");
					while (getchar() != '\n');
					deleteBookInfo(book, location, count);
					counter = counter - 1;
					break;
				default:
					printf("�޴��� ���ư��ϴ�.");
					break;
				}
			}
			else {
				printf("�ش� ������ �������� �ʽ��ϴ�.\n");
			}
			break;
		case 3:
			printf("�������� �Է����ּ���\n");
			getchar();
			gets(title.title);
			qsort(book, count, sizeof(*book), compareByTitle);
			result = bsearch(&title, book, count, sizeof(BOOK), compareByTitle);
			if (result != NULL) {
				printf("%s�� å�� %s�� �ۼ��Ͽ��� %d�� �����Դϴ�.\n", result->title, result->writer, result->price);
				int select3 = 0;
				int location = result - book;
				printf("1.���� ���� ����\n");
				printf("2.���� ���� ����\n");
				scanf("%d", &select3);
				switch (select3)
				{
				case 1:
					printf("���� ���� ���� �޴��Դϴ�.\n");					
					while (getchar() != '\n');
					changeBookInfo(book, location);			
					break;
				case 2:
					printf("�ش� ������ ���� �Ǿ����ϴ�\n");
					while (getchar() != '\n');
					deleteBookInfo(book, location, count);
					counter = counter - 1;
					break;
				default:
					printf("�޴��� ���ư��ϴ�.");
					break;
				}
			}
			else {
				printf("�ش� ������ �������� �ʽ��ϴ�.\n");
			}
			break;
		case 4:
			qsort(book, count, sizeof(*book), compareByPrice);
			printf("������ �ݾ�\n");
			for (int i = 0;i < counter;i++) {
				printf("%d\n", book[i].price);
			}
			break;
		case 5:
			qsort(book, count, sizeof(*book), compareByPrice);
			printBook(book, counter);
			break;
		case 6:
			saveBook(book,counter,count);
			free(book);
			book = NULL;
			exit(0);
			break;
		default:
			printf("�߸��� �Է��Դϴ�.\n");
			break;
		}
	}
	return 0;
}

