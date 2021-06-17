#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "book.h"
#include "Filelo.h"
#include "menu.h"

int main(void) {
	BOOK* book = NULL;
	BOOK* temp = NULL;
	BOOK* result, writer, title;
	int count = 0;
	int counter = 0;
	int *cPoint = &count;
	int *ctPoint = &counter;
	
	loadBOOK(ctPoint, cPoint);	
	if (count == 0) {
		printf("최대 저장가능한 책의 개수를 입력해주세요\n");
		scanf("%d", &count);
		while (getchar() != '\n');
		book = AllocateBooks(count);
	}else {
		book = AllocateBooks(count);
		loadBOOKInfo(book,counter,count);
	}
	int select = 1;
	char key[40] = { 0 };
	while (1) {
		printf("1. 도서입력\n");
		printf("2. 저자별검색\n");
		printf("3. 제목검색\n");
		printf("4. 가격 순으로 정렬\n");
		printf("5. 전체 도서 정보 출력\n");
		printf("6. 끝\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			if (counter == count) {
				printf("더이상의 책 정보를 입력할 수 없습니다.\n");
				int select2 = 0;
				printf("공간 수정을 원하시면 1번을 눌러주세요\n");
				scanf("%d", &select2);
				switch (select2)
				{
				case 1:
					printf("용량이 늘어났습니다.\n");
					temp = book;
					count += count;
					int* resize = &count;
					book = (BOOK*)realloc(book, (sizeof(BOOK)* (*resize)));
					if (book == NULL) {
						book = temp;
					}
					break;
				default:
					printf("메뉴로 돌아갑니다.\n");
					break;
				}
			}
			else {
				if (book == NULL) {
					return -1;
				}
				while (getchar() != '\n');
				InputBookInfo(book, counter);
				counter = counter + 1;
			}
			break;
		case 2:
			printf("저자명을 입력해주세요\n");
			getchar();
			gets(writer.writer);
			qsort(book, count, sizeof(*book), compareByWriter);
			result = bsearch(&writer, book, count, sizeof(BOOK), compareByWriter);
			if (result != NULL) {
				printf("%s가 작성한 책은 %s이며 %d의 가격을 가지고 있습니다.\n", result->writer, result->title, result->price);
				int select4 = 0;
				int location = result - book;
				printf("1.도서 정보 수정\n");
				printf("2.도서 정보 삭제\n");
				scanf("%d", &select4);
				switch (select4)
				{
				case 1:
					printf("도서 정보 수정 메뉴입니다.\n");					
					while (getchar() != '\n');
					changeBookInfo(book, location);
					break;
				case 2:
					printf("해당 도서가 삭제 되었습니다\n");
					while (getchar() != '\n');
					deleteBookInfo(book, location, count);
					counter = counter - 1;
					break;
				default:
					printf("메뉴로 돌아갑니다.");
					break;
				}
			}
			else {
				printf("해당 도서가 존재하지 않습니다.\n");
			}
			break;
		case 3:
			printf("도서명을 입력해주세요\n");
			getchar();
			gets(title.title);
			qsort(book, count, sizeof(*book), compareByTitle);
			result = bsearch(&title, book, count, sizeof(BOOK), compareByTitle);
			if (result != NULL) {
				printf("%s의 책은 %s가 작성하였고 %d의 가격입니다.\n", result->title, result->writer, result->price);
				int select3 = 0;
				int location = result - book;
				printf("1.도서 정보 수정\n");
				printf("2.도서 정보 삭제\n");
				scanf("%d", &select3);
				switch (select3)
				{
				case 1:
					printf("도서 정보 수정 메뉴입니다.\n");					
					while (getchar() != '\n');
					changeBookInfo(book, location);			
					break;
				case 2:
					printf("해당 도서가 삭제 되었습니다\n");
					while (getchar() != '\n');
					deleteBookInfo(book, location, count);
					counter = counter - 1;
					break;
				default:
					printf("메뉴로 돌아갑니다.");
					break;
				}
			}
			else {
				printf("해당 도서가 존재하지 않습니다.\n");
			}
			break;
		case 4:
			qsort(book, count, sizeof(*book), compareByPrice);
			printf("정렬후 금액\n");
			for (int i = 0;i < counter;i++) {
				printf("%d\n", book[i].price);
			}
			break;
		case 5:
			qsort(book, count, sizeof(*book), compareByPrice);
			printBook(book, counter);
			break;
		case 6:
			saveBook(book,counter,count);
			free(book);
			book = NULL;
			exit(0);
			break;
		default:
			printf("잘못된 입력입니다.\n");
			break;
		}
	}
	return 0;
}

