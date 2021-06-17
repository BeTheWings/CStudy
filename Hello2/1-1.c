#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book {
    char title[40];
    char writer[20];
    int price;
}BOOK;

int compareByPrice(const void* b1, const void* b2);
int compareByWriter(const void* b1, const void* b2);
int compareByTitle(const void* b1, const void* b2);

int main(void) {
    BOOK* book[10];
    BOOK writer, title;
    BOOK* ptr;

    int counter = 0;
    int count = 10;

    for (int i = 0;i < sizeof(book) / sizeof(BOOK*);i++) {
        book[i] = malloc(sizeof(BOOK));
        memset(book[i], 0, sizeof(BOOK));
    }

    int select = 1;
    int found = -1;

    while (1) {
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

            ptr = &writer;
            gets(ptr->writer);
            qsort(book, counter, sizeof(BOOK*), compareByWriter);

            BOOK** result = (BOOK**)bsearch(&ptr, book, counter, sizeof(BOOK*), compareByWriter);
            if (result != NULL)
            {
                printf("%s가 작성한책은 %s이며 가격은 %d입니다.\n", (*result)->writer, (*result)->title, (*result)->price);
            }
            else
            {
                printf("해당 도서가 존재하지 않습니다.\n");
            }
            break;
        case 3:
            printf("도서명을 입력해주세요\n");
            getchar();

            ptr = &title;
            gets(ptr->title);
            qsort(book, counter, sizeof(BOOK*), compareByTitle);

            BOOK** result2 = (BOOK**)bsearch(&ptr, book, counter, sizeof(BOOK*), compareByTitle);
            if (result2 != NULL)
            {
                printf("%s는 %s가 작성한 책이며 가격은 %d입니다.\n", (*result2)->title, (*result2)->writer, (*result2)->price);
            }
            else
            {
                printf("해당 도서가 존재하지 않습니다.\n");
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
            exit(0);
            break;
        default:
            printf("잘못된 입력입니다.");
            break;
        }

    }

    for (int i = 0; i < sizeof(book) / sizeof(BOOK*); i++)
    {
        free(book[i]);
        book[i] = NULL;
    }


    return 0;
}

int compareByTitle(const void* b1, const void* b2)
{
    const BOOK* B1 = *(BOOK**)b1;
    const BOOK* B2 = *(BOOK**)b2;
    return  strcmp(B1->title, B2->title);

}
int compareByWriter(const void* b1, const void* b2)
{
    const BOOK* B1 = *(BOOK**)b1;
    const BOOK* B2 = *(BOOK**)b2;
    return  strcmp(B1->writer, B2->writer);
}
int compareByPrice(const void* b1, const void* b2) {
    const BOOK* B1 = *(BOOK**)b1;
    const BOOK* B2 = *(BOOK**)b2;

    if ((B1->price < B2->price)) {
        return 1;
    }
    else if ((B1->price > B2->price)) {
        return -1;
    }
    else {
        return 0;
    }
}

