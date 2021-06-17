#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int compareByName(const void * e1, const void* e2);
typedef struct font {
	char faceName[40]; //폰트명
	unsigned int size; //폰트크기
	int weight; //폰트두께

}FONT;

int main(void) {
	FONT font[5] = { {"궁성체",10,2} ,{"맑음고딕",10,2} , {"바탕체",10,2} , {"새굴림",8,2} , {"한컴고딕",12,4} };
	qsort(font, 5, sizeof(FONT),compareByName);
	/*qsort에 따라서 미리 정의해놓는다.*/
	FONT* pos;
	char key[40];
	printf("검색하고싶은 폰트체를 입력해주세요\n");
	gets(key);
      /*key, base nmemb compare*/
	
	pos = bsearch(key, font,5, sizeof(FONT),compareByName);
	if (pos != NULL) {
		printf("%s가 array의 %d에 위치해 있습니다.",pos , pos-font);
	}
	else {
		printf("%s가 array에 존재하지 않습니다.", key);
	}
	return 0;
}

int compareByName(const void* e1, const void* e2) {

	const FONT* f1 = (const FONT*)e1;
	const FONT* f2 = (const FONT*)e2;
	return strcmp(f1->faceName, f2->faceName);
}