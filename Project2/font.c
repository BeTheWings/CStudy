#include<stdio.h>
#include "font.h"
#include "font.h"

int main(void) {
	FONT font1 = { "����",10,2 };
	PrintfFont(&font1);
}

PrintfFont(const FONT* pFont) {
	printf("��Ʈ�� : %s\n", pFont->faceName);
	printf("��Ʈũ�� : %d\n", pFont->size);
	printf("��Ʈ�β� : %d\n", pFont->weight);
}
