#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct product {

	char name[20];
	int price;
	int stock;
} PRODUCT;

int CompareByName(const void* e1, const void* e2);
int CompareByPrice(const void* e1, const void* e2);

int main(void) {

	PRODUCT prd = NULL;

	qsort(prd, 5, sizeof(PRODUCT), CompareByName);
	printf("*** 이름 순 정렬 ***\n");
	
	return 0;
}
int CompareByName(const void* e1, const void* e2) {

	const PRODUCT *p1 = (const PRODUCT*)e1;
	const PRODUCT *p2 = (const PRODUCT*)e2;
	return strcmp(p1->name, p2->name);
}
int CompareByPrice(const void* e1, const void* e2) {
	const PRODUCT* p1 = (const PRODUCT*)e1;
	const PRODUCT* p2 = (const PRODUCT*)e2;
	return p1->price - p2->price;
}