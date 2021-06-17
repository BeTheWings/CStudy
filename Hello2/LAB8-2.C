#include<stdio.h>
#include<string.h>
#define Max 100
typedef struct telephone{
	int national;
	unsigned long long telNum;
}tel;
typedef struct person {
	char name[Max];
	int age;
	tel Tel;

}Person;
int main(void) {
	//1
	Person person1={"박지수",28,8210,44176794};
	printf("이름:%s나이:%d전화번호:%d%llu\n", person1.name,person1.age,person1.Tel.national,person1.Tel.telNum);
	//2
	Person person;
	strcpy(person.name , "박지수");
	person.age = 28;
	person.Tel.national = 8210;
	person.Tel.telNum = 44176794;

	printf("이름:%s\n나이: %d \n전화번호:%d%llu", person.name, person.age, person.Tel.national, person.Tel.telNum);
	return 0;
}
/*typedef struct person {
	char name[Max];
	int age;

} Person;
int main(void) {
	//1 사람 구조체 선언과 동시에 초기화.
	Person person = {"박지수",28};
	tel Tel = {8210,44176794};
	printf("이름:%s 나이:%d\n", person.name, person.age);
	printf("전화번호:%d%llu\n", Tel.national, Tel.telNum);
	//2 사람 구조체 선언 후 멤버값 사용
	Person per1;
	tel Tel1;
	per1.age = 27;
	strcpy(per1.name,"김호남");
	Tel1.national = 8210;
	Tel1.telNum = 123456;
	printf("이름:%s 나이:%d\n", per1.name, per1.age);
	printf("전화번호:%d%llu\n", Tel1.national, Tel1.telNum);
	return 0;
}*/

