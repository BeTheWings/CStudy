#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "book.h"


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
void InputBookInfo(BOOK* book, int count)
{
	printf("���� :");
	gets(book[count].writer);
	printf("å ���� :");
	gets(book[count].title);
	printf("�� �� :");
	scanf("%d", &book[count].price);
}


