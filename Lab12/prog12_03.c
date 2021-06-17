#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct login_info {
    char id[20];
    char passwd[20];
} LOGIN_INFO;

int Compare(const void* e1, const void* e2);

int main(void)
{
    LOGIN_INFO *arr = NULL;
    int size;
    int i;
    FILE *fp = NULL;

    fp = fopen("password.txt", "r");
    if( fp == NULL )
    {
        printf("���� ���� ����\n");
        return -1;
    }

    fscanf(fp, "%d", &size);
    arr = (LOGIN_INFO*) malloc(sizeof(LOGIN_INFO)*size);

    for( i = 0 ; i < size ; i++)
    {
        fscanf(fp, "%s %s", arr[i].id, arr[i].passwd);
    }
    fclose(fp);

    printf("�н����� ������ �о����ϴ�. %d���� ����� ������ �ֽ��ϴ�.\n", size);

    qsort(arr, size, sizeof(LOGIN_INFO), Compare);

    while( 1 )
    {
        LOGIN_INFO temp;
        char yesno;
        LOGIN_INFO *pFound = NULL;

        printf("ID�� �Է��ϼ��� : ");
        scanf("%s", temp.id);
        printf("�н����带 �Է��ϼ��� : ");
        scanf("%s", temp.passwd);
        while( getchar( ) != '\n' );

        pFound = bsearch(&temp, arr, size, sizeof(LOGIN_INFO), Compare);
        if( pFound != NULL && strcmp(pFound->passwd, temp.passwd) == 0 )
            printf("LOGIN OK!\n");
        else
            printf("LOGIN FAILED!\n");

        printf("��� �Ͻðڽ��ϱ�? (Y/N) : ");
        scanf("%c", &yesno);
        while( getchar( ) != '\n' );

        if( yesno == 'N' || yesno == 'n' )
            break;
    }

    free(arr);
    arr = NULL;

    return 0;
}

int Compare(const void* e1, const void* e2)
{
    const LOGIN_INFO *p1 = (const LOGIN_INFO*) e1;
    const LOGIN_INFO *p2 = (const LOGIN_INFO*) e2;
    return strcmp(p1->id, p2->id);
}