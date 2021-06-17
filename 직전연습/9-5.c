#include<stdio.h>
#include<stdlib.h>
typedef struct contact {
	char name[40];
	char phoneNum[40];

}CONTACT;
int main(void) {
	int counter = 1;
	
	CONTACT* contact = malloc(sizeof(CONTACT)*counter);

	printf("이름\n");
	gets(contact->name);
	printf("전화번호\n");
	gets(contact->phoneNum);

	printf("%s %s", contact->name, contact->phoneNum);
	return 0;
}