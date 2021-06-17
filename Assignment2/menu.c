#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "book.h"
#include "menu.h"

void changeBookInfo(BOOK* book, int location)
{
	printf("������ ������ ������� �Է����ּ���\n");
	printf("���� :");
	gets(book[location].writer);
	printf("å ���� :");
	gets(book[location].title);
	printf("�� �� :");
	scanf("%d", &book[location].price);
}

void deleteBookInfo(BOOK* book, int location,int count) {
	
	for (int i = location;i < count;i++) {
		book[i] = book[i + 1];
	}
	
}


void printBook(const BOOK* book, int count) {
	printf(" === ��ü å ��� === \n");
	for (int i = 0; i < count; i++) {
		printf("����: %s\n", book[i].title);
		printf("����: %s\n", book[i].writer);
		printf("����: %d��\n", book[i].price);
		printf("\n");
	}
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
