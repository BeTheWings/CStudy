#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book {
    char title[40];
    char writer[20];
    int price;
}BOOK;

int compareByPrice(const void* b1, const void* b2);

int main(void) {
    BOOK* book[10];
    int counter = 0;
    int count = 10;
    for (int i = 0;i < sizeof(book) / sizeof(BOOK*);i++) {
        book[i] = malloc(sizeof(BOOK));
        
    }

    int select = 1;
    int found = -1;
    char key[40] = { 0 };
    while (select) {
        printf("1. �����Է�\n");
        printf("2. ���ں��˻�\n");
        printf("3. ����˻�\n");
        printf("4. ���� ������ ����\n");
        printf("5. ��\n");
        scanf("%d", &select);
        switch (select)
        {
        case 1:

            if (counter == count) {
                printf("���̻��� å ������ �Է��� �� �����ϴ�.\n");
            }
            else {

                if (book[counter] == NULL) {
                    return -1;
                }
                while (getchar() != '\n');
                printf("���� :");
                gets(book[counter]->writer);
                printf("å ���� :");
                gets(book[counter]->title);
                printf("�� �� :");
                scanf("%d", &book[counter]->price);
                counter = counter + 1;
            }
            break;
        case 2:
            printf("���ڸ��� �Է����ּ���\n");
            getchar();
            gets(key);

            for (int i = 0;i < count;i++) {
                if (strcmp(key, book[i]->writer) == 0) {
                    found = i;
                }
            }
            if (found == -1) {
                printf("%s�� ���� �����Դϴ�.\n", key);
            }
            else {
                printf("%s�� �ۼ��� å�� %s�̸� ������ %d�Դϴ�.\n", key, book[found]->title, book[found]->price);
            }

            break;
        case 3:
            printf("�������� �Է����ּ���\n");
            getchar();
            gets(key);

            for (int i = 0;i < count;i++) {
                if (strcmp(key, book[i]->title) == 0) {
                    found = i;
                }
            }
            if (found == -1) {
                printf("%s�� ���� �����Դϴ�.\n", key);
            }
            else {
                printf("%s�� å�� %s�� �ۼ��߰� ������ %d�Դϴ�.\n", key, book[found]->writer, book[found]->price);
            }

            break;
        case 4:
            qsort(book, counter, sizeof(book[0]), compareByPrice);
            printf("���� �� ����:\n");
            for (int i = 0;i < counter;i++) {
                printf("%d\n", book[i]->price);
            }
            break;
        case 5:
            select = 0;
            break;
        default:
            printf("�߸��� �Է��Դϴ�.");
            break;
        }

    }

    for (int i = 0; i < sizeof(book) / sizeof(BOOK*); i++)
    {
        free(book[i]);
    }


    return 0;
}

int compareByPrice(const void* b1, const void* b2) {
     BOOK* B1 = (const BOOK*)b1;
     BOOK* B2 = (const BOOK*)b2;

    if ((B1->price > B2->price)) {
        return 1;
    }
    else if ((B1->price < B2->price)) {
        return -1;
    }
    else {
        return 0;
    }
}

