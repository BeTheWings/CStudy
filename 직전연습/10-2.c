#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Contact {
	char name[40];
	char phone[40];
}CONTACT;
int compareByName(const void * a,const void*b);
int compareByTel(const void* a, const void* b);
void printfInfo(CONTACT * contact,int count);
int main(void) {
	CONTACT* contact[3];
	int count = 0;
	for (int i = 0;i < 3;i++) {
		contact[i] = malloc(sizeof(CONTACT));
		memset(contact[i], 0, sizeof(CONTACT));
		printf("이름: ");
		gets(contact[i]->name);
		printf("전번: ");
		gets(contact[i]->phone);
		
	}

	//qsort(contact,3,sizeof(CONTACT) ,compareByTel);
	//printfInfo(contact, 3);
	
	for (int i = 0;i < 3;i++) {
		contact[i] = NULL;
	}
	
	return 0;
}
int compareByTel(const void* a, const void* b) {
	const CONTACT* a1 = (const CONTACT *)a;
	const CONTACT* b1 = (const CONTACT *)b;
	return strcmp(a1->phone, b1->phone);
}
int compareByName(const void* a, const void* b) {
	const CONTACT* a1 = (const CONTACT*)a;
	const CONTACT* b1 = (const CONTACT*)b;
	return strcmp(a1->name, b1->name);

}
void printfInfo(CONTACT* contact, int count) {
	CONTACT* rst = contact;
	for (int i = 0;i < count;i++) {
		printf("%s %s", rst[i].name, rst[i].phone);
	}
}
