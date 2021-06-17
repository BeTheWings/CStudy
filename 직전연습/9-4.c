#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct contact {
	char name[40];
	char phone[40];
}CONTACT;

void inputInfo(CONTACT * contact,int * counter);
void printInfo(CONTACT* contact, int counter);
int main(void) {
	CONTACT* contact = NULL;

	int count=0;
	int counter = 0;
	printf("입력할 전화번호의 갯수를 입력세요");
	scanf_s("%d",&count);
	while (getchar() != '\n');
	for (int i = 0;i < count;i++) {
		contact = malloc(sizeof(CONTACT) * count);
	}

	for (int i = 0;i < count;i++) {
	
		if (counter != count) {
		inputInfo(contact, counter);
		counter = counter + 1;
	    }
	}

	printInfo(contact, count);
	free(contact);
	return 0;
}

void inputInfo(CONTACT* contact,int counter) {

	printf("이름:");
	gets(contact[counter].name);
	printf("전화번호:");
	gets(contact[counter].phone);

	
}
void printInfo(CONTACT* contact, int counter) {
	printf("%d\n", counter);
	for (int i = 0;i < counter;i++) {
		printf("%s %s\n",contact[i].name, contact[i].phone);
	}
}
