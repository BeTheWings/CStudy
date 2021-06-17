#include<stdio.h>
#include "font.h"
#include "font.h"

int main(void) {
	FONT font1 = { "굴림",10,2 };
	PrintfFont(&font1);
}

PrintfFont(const FONT* pFont) {
	printf("폰트명 : %s\n", pFont->faceName);
	printf("폰트크기 : %d\n", pFont->size);
	printf("폰트두께 : %d\n", pFont->weight);
}
