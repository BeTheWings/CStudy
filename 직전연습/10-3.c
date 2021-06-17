#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct font {
	char name[40];
	int size;
}FONT;

int compareByName(const void *a,const const void* b);
int main(void) {

	FONT font[3] = {{"±Ω¿Ω",10},{"πŸ≈¡√º",30},{"∏º¿Ω√º",20}};
	qsort(font, 3, sizeof(FONT), compareByName);

	for (int i = 0;i < 3;i++) {
		printf("%s %d", font[i].name, font[i].size);
	}
	return 0;
}

int compareByName(const void * a,const void * b) {
	FONT* a1 = (const FONT*)a;
	FONT* b1 = (const FONT*)b;
	
	return strcmp(a1->name, b1->name);
}