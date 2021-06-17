#include<stdio.h>
typedef struct product {
	char name[20];
	int price;
	int stock;
}PRODUCT;
int main(void) {
	PRODUCT product1 = {"삼각두",1000,10};
	PRODUCT product2 = { "자",4000,10 };
	PRODUCT product3 = { "종이",3000,10 };
	/*구조체 포인터 배열에는 구조체의 주소값을 저장해야한다.*/
	PRODUCT* prd[] = { &product1,&product2,&product3 };

	for (int i = 0;i < sizeof(prd) / sizeof(prd[0]);i++) {
		printf("사이즈%d", sizeof(prd) / sizeof(prd[0]));
		printf("%s %d %d\n", prd[i]->name,prd[i]->price,prd[i]->stock);
	}

	return 0;
}