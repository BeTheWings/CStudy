#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct contact {
    char name[32];
    char phone[32];
} CONTACT;

CONTACT* AllocateContacts(int count);
void InputContacts(CONTACT* contacts, int count);

int compareByName(const void* c1, const void* c2);
int compareByTel(const void* c1, void* c2);
void PrintContacts(const CONTACT* contacts, int count);

int main()
{
    CONTACT* contacts = NULL;
    int cnt = 0;

    printf("������ ����ó�� ���� : ");
    scanf("%d", &cnt);
    while (getchar() != '\n');

    contacts = AllocateContacts(cnt);
    if (contacts == NULL)
        return -1;

    InputContacts(contacts, cnt);
    int select = 1;
    while (select) {
      
        printf("0. ����\n");
        printf("1. �̸��� ���\n");
        printf("2. ��ȭ��ȣ�� ���\n");
        scanf("%d", &select);
        switch (select)
        {
        case 0:
            select = 0;
            free(contacts);
            contacts = NULL;
            break;
        case 1:
            //�̸������
            qsort(contacts, cnt, sizeof(CONTACT), compareByName);
            PrintContacts(contacts, cnt);
         
         break;
        case 2:
            //��ȭ��ȣ�����
            qsort(contacts, cnt, sizeof(CONTACT), compareByTel);
            PrintContacts(contacts, cnt);
        break;
        
        default:
            break;
        }

    }
   
    

    return 0;
}

CONTACT* AllocateContacts(int count)
{
    CONTACT* result = NULL;
    result = (CONTACT*)malloc(sizeof(CONTACT) * count);
    if (result == NULL)
        printf("���� �޸� �Ҵ� ����\n");
    else
        memset(result, 0, sizeof(CONTACT) * count);
    return result;
}

void InputContacts(CONTACT* contacts, int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("�̸� : ");
        gets(contacts[i].name);
        printf("��ȭ��ȣ : ");
        gets(contacts[i].phone);
    }
}

void PrintContacts(const CONTACT* contacts, int count)
{
    int i;

    printf(" --- ��ü ����ó ��� ---\n");
    for (i = 0; i < count; i++)
    {
        printf("%-16s %-16s\n", contacts[i].name, contacts[i].phone);
    }
}

int compareByName(const void* c1, const void* c2) {

    const CONTACT* C1 = (const CONTACT*)c1;
    const CONTACT* C2 = (const CONTACT*)c2;
    return strcmp(C1->name, C2->name);
}

int compareByTel(const void* c1, const void* c2) {

    const CONTACT* C1 = (const CONTACT*)c1;
    const CONTACT* C2 = (const CONTACT*)c2;
    return strcmp(C1->phone , C2->phone);
}