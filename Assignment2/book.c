#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "book.h"


BOOK* AllocateBooks(int count)
{
	BOOK* result = NULL;
	result = (BOOK*)malloc(sizeof(BOOK) * count);
	if (result == NULL)
		printf("동적 메모리 할당 실패\n");
	else
		memset(result, 0, sizeof(BOOK) * count);
	return result;
}
void InputBookInfo(BOOK* book, int count)
{
	printf("저자 :");
	gets(book[count].writer);
	printf("책 제목 :");
	gets(book[count].title);
	printf("가 격 :");
	scanf("%d", &book[count].price);
}


