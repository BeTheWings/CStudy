#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "book.h"
#include "menu.h"

void changeBookInfo(BOOK* book, int location)
{
	printf("변경할 정보를 순서대로 입력해주세요\n");
	printf("저자 :");
	gets(book[location].writer);
	printf("책 제목 :");
	gets(book[location].title);
	printf("가 격 :");
	scanf("%d", &book[location].price);
}

void deleteBookInfo(BOOK* book, int location,int count) {
	
	for (int i = location;i < count;i++) {
		book[i] = book[i + 1];
	}
	
}


void printBook(const BOOK* book, int count) {
	printf(" === 전체 책 목록 === \n");
	for (int i = 0; i < count; i++) {
		printf("제목: %s\n", book[i].title);
		printf("저자: %s\n", book[i].writer);
		printf("가격: %d원\n", book[i].price);
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
