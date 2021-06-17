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

    printf("������ ����ó�� ���� : ");
    scanf("%d", &cnt);
    while( getchar() != '\n' );

    contacts = AllocateContacts(cnt);
    if( contacts == NULL )
        return -1;

    InputContacts(contacts, cnt);

    while( 1 )
    {
        printf("\n0.����\n1.�̸��� ���\n2.��ȭ��ȣ�� ���\n");
        printf("��¹�� ���� : ");
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
        printf("���� �޸� �Ҵ� ����\n");
    else
        memset(result, 0, sizeof(CONTACT)*count);
    return result;
}

void InputContacts(CONTACT* contacts, int count)
{
    int i;

    for( i = 0; i < count; i++ )
    {
        printf("��    �� : ");
        gets(contacts[i].name);
        printf("��ȭ��ȣ : ");
        gets(contacts[i].phone);
    }
}

void PrintContacts(const CONTACT* contacts, int count)
{
    int i;

    printf(" --- ��ü ����ó ��� ---\n");
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