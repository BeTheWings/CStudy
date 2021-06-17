#ifndef menu_h
#define menu_h
int compareByPrice(const void* b1, const void* b2);
int compareByWriter(const void* b1, const void* b2);
int compareByTitle(const void* b1, const void* b2);
void changeBookInfo(BOOK* book, int location);
void printBook(const BOOK* book, int count);
void deleteBookInfo(BOOK* book, int location,int size);
#endif // !1
