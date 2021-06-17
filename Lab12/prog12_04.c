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

    printf("전체 사용자 수를 입력하세요 : ");
    scanf("%d", &size);

    arr = (LOGIN_INFO*) malloc(sizeof(LOGIN_INFO)*size);
    printf("%d개의 ID와 패스워드를 입력하세요\n", size);
    for( i = 0 ; i < size ; i++ )
    {
        printf("ID를 입력하세요 : ");
        scanf("%s", arr[i].id);
        printf("패스워드를 입력하세요 : ");
        scanf("%s", arr[i].passwd);
    }

    fp = fopen("password.dat", "wb");
    if( fp == NULL )
    {
        printf("파일 열기 실패\n");
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