#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5

typedef struct font {
    char faceName[40];	// 폰트명
    unsigned int size;	// 폰트 크기
    int weight;		    // 폰트 두께
} FONT;

FONT defaultFonts[MAX] = {
    { "굴림", 10, 1 },
    { "돋움", 12, 3 },
    { "바탕", 14, 2 },
    { "궁서", 10, 2 },
    { "고딕", 16, 3 },
};

int CompareByFaceName(const void* e1, const void* e2);

int main( )
{
    FONT key = {0};
    FONT *found = NULL;    
    char yesno;

    qsort(defaultFonts, MAX, sizeof(FONT), CompareByFaceName);

    while( 1 )
    { 
        printf("검색할 폰트명 : ");
        gets(key.faceName);

        found = (FONT*) bsearch(&key, defaultFonts, MAX, sizeof(FONT), CompareByFaceName);
        if( found == NULL )
            printf("해당 폰트을 찾을 수 없습니다.\n");
        else
        { 
            printf("폰트명 : %s\n", found->faceName);
            printf("폰트크기 : %d\n", found->size);
            printf("폰트두께 : %d\n", found->weight);

            printf("계속 하시겠습니까? (Y/N) : ");
            scanf("%c", &yesno);
            while( getchar() != '\n' );   // 입력버퍼에 있는 불필요한 문자 제거

            if( yesno == 'N' || yesno == 'n' )
                break;
        }
    }

    return 0;
}

int CompareByFaceName(const void* e1, const void* e2)
{
    const FONT *fnt1 = (const FONT *)e1;
    const FONT *fnt2 = (const FONT *)e2;
    return strcmp(fnt1->faceName, fnt2->faceName);
}
