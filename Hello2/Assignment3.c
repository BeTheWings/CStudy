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
        printf("1. 도서입력\n");
        printf("2. 저자별검색\n");
        printf("3. 제목검색\n");
        printf("4. 가격 순으로 정렬\n");
        printf("5. 끝\n");
        scanf("%d", &select);
        switch (select)
        {
        case 1:

            if (counter == count) {
                printf("더이상의 책 정보를 입력할 수 없습니다.\n");
            }
            else {

                if (book[counter] == NULL) {
                    return -1;
                }
                while (getchar() != '\n');
                printf("저자 :");
                gets(book[counter]->writer);
                printf("책 제목 :");
                gets(book[counter]->title);
                printf("가 격 :");
                scanf("%d", &book[counter]->price);
                counter = counter + 1;
            }
            break;
        case 2:
            printf("저자명을 입력해주세요\n");
            getchar();
            gets(key);

            for (int i = 0;i < count;i++) {
                if (strcmp(key, book[i]->writer) == 0) {
                    found = i;
                }
            }
            if (found == -1) {
                printf("%s는 없는 정보입니다.\n", key);
            }
            else {
                printf("%s가 작성한 책은 %s이며 가격은 %d입니다.\n", key, book[found]->title, book[found]->price);
            }

            break;
        case 3:
            printf("도서명을 입력해주세요\n");
            getchar();
            gets(key);

            for (int i = 0;i < count;i++) {
                if (strcmp(key, book[i]->title) == 0) {
                    found = i;
                }
            }
            if (found == -1) {
                printf("%s는 없는 정보입니다.\n", key);
            }
            else {
                printf("%s의 책은 %s가 작성했고 가격은 %d입니다.\n", key, book[found]->writer, book[found]->price);
            }

            break;
        case 4:
            qsort(book, counter, sizeof(book[0]), compareByPrice);
            printf("정렬 후 가격:\n");
            for (int i = 0;i < counter;i++) {
                printf("%d\n", book[i]->price);
            }
            break;
        case 5:
            select = 0;
            break;
        default:
            printf("잘못된 입력입니다.");
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

