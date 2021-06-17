#include <stdio.h>
#include <stdlib.h>

typedef struct login_info {
    char id[20];
    char passwd[20];
} LOGIN_INFO;

int main(void)
{
    LOGIN_INFO *arr = NULL;
    int size;
    int i;
    FILE *fp = NULL;

    printf("��ü ����� ���� �Է��ϼ��� : ");
    scanf("%d", &size);

    arr = (LOGIN_INFO*) malloc(sizeof(LOGIN_INFO)*size);
    printf("%d���� ID�� �н����带 �Է��ϼ���\n", size);
    for( i = 0 ; i < size ; i++ )
    {
        printf("ID�� �Է��ϼ��� : ");
        scanf("%s", arr[i].id);
        printf("�н����带 �Է��ϼ��� : ");
        scanf("%s", arr[i].passwd);
    }

    fp = fopen("password.dat", "wb");
    if( fp == NULL )
    {
        printf("���� ���� ����\n");
    }
    else 
    {
        fwrite(&size, sizeof(int), 1, fp);
        fwrite(arr, sizeof(LOGIN_INFO), size, fp);
        fclose(fp);
    }

    free(arr);
    arr = NULL;

    return 0;
}