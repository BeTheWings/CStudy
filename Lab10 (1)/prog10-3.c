#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5

typedef struct font {
    char faceName[40];	// ��Ʈ��
    unsigned int size;	// ��Ʈ ũ��
    int weight;		    // ��Ʈ �β�
} FONT;

FONT defaultFonts[MAX] = {
    { "����", 10, 1 },
    { "����", 12, 3 },
    { "����", 14, 2 },
    { "�ü�", 10, 2 },
    { "���", 16, 3 },
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
        printf("�˻��� ��Ʈ�� : ");
        gets(key.faceName);

        found = (FONT*) bsearch(&key, defaultFonts, MAX, sizeof(FONT), CompareByFaceName);
        if( found == NULL )
            printf("�ش� ��Ʈ�� ã�� �� �����ϴ�.\n");
        else
        { 
            printf("��Ʈ�� : %s\n", found->faceName);
            printf("��Ʈũ�� : %d\n", found->size);
            printf("��Ʈ�β� : %d\n", found->weight);

            printf("��� �Ͻðڽ��ϱ�? (Y/N) : ");
            scanf("%c", &yesno);
            while( getchar() != '\n' );   // �Է¹��ۿ� �ִ� ���ʿ��� ���� ����

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
