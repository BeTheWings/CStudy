#include<stdio.h>
typedef struct product {
	char name[20];
	int price;
	int stock;
}PRODUCT;
int main(void) {
	PRODUCT product1 = {"�ﰢ��",1000,10};
	PRODUCT product2 = { "��",4000,10 };
	PRODUCT product3 = { "����",3000,10 };
	/*����ü ������ �迭���� ����ü�� �ּҰ��� �����ؾ��Ѵ�.*/
	PRODUCT* prd[] = { &product1,&product2,&product3 };

	for (int i = 0;i < sizeof(prd) / sizeof(prd[0]);i++) {
		printf("������%d", sizeof(prd) / sizeof(prd[0]));
		printf("%s %d %d\n", prd[i]->name,prd[i]->price,prd[i]->stock);
	}

	return 0;
}