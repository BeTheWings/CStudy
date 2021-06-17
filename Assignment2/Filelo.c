#include "Filelo.h"
#include<stdio.h>
void saveBook(BOOK* book,int counter,int count) {
	FILE* fp;
	fp = fopen("data.txt", "w+");
	if (fp == NULL) {
		printf("해당파일이 없습니다.");
	}
	fprintf(fp, "%d\n", count);
	fprintf(fp, "%d\n", counter);
	for (int i = 0;i < counter;i++) {
		fprintf(fp, "%s %s %d\n", book[i].title,book[i].writer,book[i].price);
	}
	fclose(fp);
}
void loadBOOK(int* counter, int* count) {
	FILE* fp;

	fp = fopen("data.txt", "r");

	if (fp == NULL) {
		printf("해당파일이 없습니다.");
	}
	else {
		fscanf(fp, "%d\n", count);
		fscanf(fp, "%d\n", counter);
	}
	fclose(fp);
}
void loadBOOKInfo(BOOK* book,int counter,int count) {
    	FILE* fp;
      	fp = fopen("data.txt", "a+");
	
		int saveCount,saveCounter;
		 fscanf(fp, "%d\n", &saveCount);
	     fscanf(fp, "%d\n", &saveCounter);
		
		 for (int i = 0;i < count;i++) {
			 fscanf(fp, "%s %s %d\n", book[i].title, book[i].writer, &book[i].price);			
		 }
		fclose(fp);
	
}

