#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int compareByName(const void * e1, const void* e2);
typedef struct font {
	char faceName[40]; //��Ʈ��
	unsigned int size; //��Ʈũ��
	int weight; //��Ʈ�β�

}FONT;

int main(void) {
	FONT font[5] = { {"�ü�ü",10,2} ,{"�������",10,2} , {"����ü",10,2} , {"������",8,2} , {"���İ��",12,4} };
	qsort(font, 5, sizeof(FONT),compareByName);
	/*qsort�� ���� �̸� �����س��´�.*/
	FONT* pos;
	char key[40];
	printf("�˻��ϰ���� ��Ʈü�� �Է����ּ���\n");
	gets(key);
      /*key, base nmemb compare*/
	
	pos = bsearch(key, font,5, sizeof(FONT),compareByName);
	if (pos != NULL) {
		printf("%s�� array�� %d�� ��ġ�� �ֽ��ϴ�.",pos , pos-font);
	}
	else {
		printf("%s�� array�� �������� �ʽ��ϴ�.", key);
	}
	return 0;
}

int compareByName(const void* e1, const void* e2) {

	const FONT* f1 = (const FONT*)e1;
	const FONT* f2 = (const FONT*)e2;
	return strcmp(f1->faceName, f2->faceName);
}