//2���� ���� ����� �����͸� ��ȯ�ϴ� �Լ�
#include<stdio.h>

typedef struct pointer2D {
	int x;
	int y;
}Pointer2D;

Pointer2D* allocPointer();
int main(void) {
	Pointer2D* pointer2D;
	
	pointer2D = allocPointer();
	printf("x,y�� ���� %d,%d�Դϴ�.", pointer2D->x, pointer2D->y);
	free(pointer2D);
	return 0;
}

Pointer2D* allocPointer() {
	Pointer2D* pointer= NULL;
	int count = 1;
	pointer = (Pointer2D*) malloc(sizeof(Pointer2D)* count);
	if (pointer == NULL) {
		printf("1");
	}
	else {
		memset(pointer, 0, sizeof(Pointer2D) * count);

	}
	
	printf("x���� �Է��ϼ���\n");
	scanf("%d", &pointer->x);
	printf("y���� �Է��ϼ���\n");
	scanf("%d", &pointer->y);

	return pointer;
}