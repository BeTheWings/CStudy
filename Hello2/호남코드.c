#include <stdio.h>
#include <string.h> 
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

typedef struct book {
    char title[20];
    char writer[20];
    int price;
} BOOK;

int ComparePrice(const void* e1, const void* e2);
int i = 0;

int main(void) {
    BOOK* book[10];
    int choosedNumber;

    for (int j = 0; j < sizeof(book) / sizeof(BOOK*); j++) {   // ��� ������ŭ �ݺ�
        book[j] = malloc(sizeof(BOOK));    // �� ��ҿ� ����ü ũ�⸸ŭ �޸� �Ҵ�
    }

    while (1) {
        printf("1. ���� �Է�\n");
        printf("2. ���ڸ� �˻�\n");
        printf("3. ���� �˻�\n");
        printf("4. ���� ������ ����\n");
        printf("5. ��\n");
        printf("�޴��� �����ϼ���. ");
        scanf("%d", &choosedNumber);

        if (choosedNumber == 1) {
            printf("���� �Է� : ");
            scanf("%s", book[i]->title);
            printf("���� �Է� : ");
            scanf("%s", book[i]->writer);
            printf("���� �Է� : ");
            scanf("%d", &book[i]->price);

            i++;
            continue;
        }
        else if (choosedNumber == 2) {
            char s1[20];
            printf("���ڸ� �˻� : ");
            scanf("%s", s1);
            for (int i = 0; i < sizeof(book) / sizeof(BOOK*); i++) {
                if (strcmp(s1, book[i]->writer) == 0) {
                    printf("å�� ���� >>> \n");
                    printf("%s\n", book[i]->title);
                    printf("%s\n", book[i]->writer);
                    printf("%d\n\n", book[i]->price);
                }
            }
            continue;
        }
        else if (choosedNumber == 3) {
            char s1[20];
            printf("���� �˻� : ");
            scanf("%s", s1);
            for (int i = 0; i < sizeof(book) / sizeof(BOOK*); i++) {
                if (strcmp(s1, book[i]->title) == 0) {
                    printf("å�� ���� >>> \n");
                    printf("%s\n", book[i]->title);
                    printf("%s\n", book[i]->writer);
                    printf("%d\n\n", book[i]->price);
                }
            }
            continue;
        }
        else if (choosedNumber == 4) {
            printf("���ݺ� �������� ���� : \n");
            qsort(book, i, sizeof(book[0]), ComparePrice);
            for (int k = 0; k < i; k++) {
                printf("%d\n", book[k]->price);
            }

            continue;
        }
        else if (choosedNumber == 5) {
            printf("���α׷� ����\n");
            break;
        }

    }

    for (int i = 0; i < sizeof(book) / sizeof(BOOK*); i++)    // ��� ������ŭ �ݺ�
    {
        free(book[i]);    // �� ����� ���� �޸� ����
    }
    return 0;
}

int ComparePrice(const void* e1, const void* e2) {
    BOOK* b1 = (BOOK*)e1;
    BOOK* b2 = (BOOK*)e2;

    return -(b1->price - b2->price);
}