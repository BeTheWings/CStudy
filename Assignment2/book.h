#ifndef book_H
#define book_H
typedef struct book {
	char title[40];
	char writer[20];
	int price;
}BOOK;
BOOK* AllocateBooks(int count);
void InputBookInfo(BOOK* contacts, int count);
#endif