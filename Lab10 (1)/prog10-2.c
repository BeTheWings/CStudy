#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

typedef struct contact {
    char name[32];
    char phone[32];
} CONTACT;

CONTACT* AllocateContacts(int count);
void InputContacts(CONTACT* contacts, int count);
void PrintContacts(const CONTACT* contacts, int count);
int CompareByName(const void* e1, const void* e2);
int CompareByPhone(const void* e1, const void* e2);

int main( )
{
    CONTACT *contacts = NULL;
    int cnt = 0;
    int choice;

    printf("저장할 연락처의 개수 : ");
    scanf("%d", &cnt);
    while( getchar() != '\n' );

    contacts = AllocateContacts(cnt);
    if( contacts == NULL )
        return -1;

    InputContacts(contacts, cnt);

    while( 1 )
    {
        printf("\n0.종료\n1.이름순 출력\n2.전화번호순 출력\n");
        printf("출력방법 선택 : ");
        scanf("%d", &choice);
        if( choice == 0 )
            break;

        switch( choice )
        {
        case 1:
            qsort(contacts, cnt, sizeof(CONTACT), CompareByName);
            break;
        case 2:
            qsort(contacts, cnt, sizeof(CONTACT), CompareByPhone);
            break;
        }
        PrintContacts(contacts, cnt);
    }

    free(contacts);
    contacts = NULL;

    return 0;
}

CONTACT* AllocateContacts(int count)
{
    CONTACT *result = NULL;
    result = (CONTACT*)malloc(sizeof(CONTACT)*count);
    if( result == NULL )
        printf("동적 메모리 할당 실패\n");
    else
        memset(result, 0, sizeof(CONTACT)*count);
    return result;
}

void InputContacts(CONTACT* contacts, int count)
{
    int i;

    for( i = 0; i < count; i++ )
    {
        printf("이    름 : ");
        gets(contacts[i].name);
        printf("전화번호 : ");
        gets(contacts[i].phone);
    }
}

void PrintContacts(const CONTACT* contacts, int count)
{
    int i;

    printf(" --- 전체 연락처 목록 ---\n");
    for( i = 0; i < count; i++ )
    {
        printf("%-16s %-16s\n", contacts[i].name, contacts[i].phone);
    }
}

int CompareByName(const void* e1, const void* e2)
{
    CONTACT *pContact1 = (CONTACT*)e1;
    CONTACT *pContact2 = (CONTACT*)e2;
    return strcmp(pContact1->name, pContact2->name);
}

int CompareByPhone(const void* e1, const void* e2)
{
    CONTACT *pContact1 = (CONTACT*)e1;
    CONTACT *pContact2 = (CONTACT*)e2;
    return strcmp(pContact1->phone, pContact2->phone);
}