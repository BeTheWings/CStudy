#include <stdio.h>
#include <string.h> 
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

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

    for (int j = 0; j < sizeof(book) / sizeof(BOOK*); j++) {   // 요소 개수만큼 반복
        book[j] = malloc(sizeof(BOOK));    // 각 요소에 구조체 크기만큼 메모리 할당
    }

    while (1) {
        printf("1. 도서 입력\n");
        printf("2. 저자명 검색\n");
        printf("3. 제목 검색\n");
        printf("4. 가격 순으로 정렬\n");
        printf("5. 끝\n");
        printf("메뉴를 선택하세요. ");
        scanf("%d", &choosedNumber);

        if (choosedNumber == 1) {
            printf("제목 입력 : ");
            scanf("%s", book[i]->title);
            printf("저자 입력 : ");
            scanf("%s", book[i]->writer);
            printf("가격 입력 : ");
            scanf("%d", &book[i]->price);

            i++;
            continue;
        }
        else if (choosedNumber == 2) {
            char s1[20];
            printf("저자명 검색 : ");
            scanf("%s", s1);
            for (int i = 0; i < sizeof(book) / sizeof(BOOK*); i++) {
                if (strcmp(s1, book[i]->writer) == 0) {
                    printf("책의 정보 >>> \n");
                    printf("%s\n", book[i]->title);
                    printf("%s\n", book[i]->writer);
                    printf("%d\n\n", book[i]->price);
                }
            }
            continue;
        }
        else if (choosedNumber == 3) {
            char s1[20];
            printf("제목 검색 : ");
            scanf("%s", s1);
            for (int i = 0; i < sizeof(book) / sizeof(BOOK*); i++) {
                if (strcmp(s1, book[i]->title) == 0) {
                    printf("책의 정보 >>> \n");
                    printf("%s\n", book[i]->title);
                    printf("%s\n", book[i]->writer);
                    printf("%d\n\n", book[i]->price);
                }
            }
            continue;
        }
        else if (choosedNumber == 4) {
            printf("가격별 오름차순 정렬 : \n");
            qsort(book, i, sizeof(book[0]), ComparePrice);
            for (int k = 0; k < i; k++) {
                printf("%d\n", book[k]->price);
            }

            continue;
        }
        else if (choosedNumber == 5) {
            printf("프로그램 종료\n");
            break;
        }

    }

    for (int i = 0; i < sizeof(book) / sizeof(BOOK*); i++)    // 요소 개수만큼 반복
    {
        free(book[i]);    // 각 요소의 동적 메모리 해제
    }
    return 0;
}

int ComparePrice(const void* e1, const void* e2) {
    BOOK* b1 = (BOOK*)e1;
    BOOK* b2 = (BOOK*)e2;

    return -(b1->price - b2->price);
}