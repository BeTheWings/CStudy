#include<stdio.h>
#include<stdlib.h>
typedef struct contact {
	char name[40];
	char phoneNum[40];

}CONTACT;
int main(void) {
	int counter = 1;
	
	CONTACT* contact = malloc(sizeof(CONTACT)*counter);

	printf("�̸�\n");
	gets(contact->name);
	printf("��ȭ��ȣ\n");
	gets(contact->phoneNum);

	printf("%s %s", contact->name, contact->phoneNum);
	return 0;
}