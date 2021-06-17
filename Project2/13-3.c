//2차원 정보 만들기 포인터를 반환하는 함수
#include<stdio.h>

typedef struct pointer2D {
	int x;
	int y;
}Pointer2D;

Pointer2D* allocPointer();
int main(void) {
	Pointer2D* pointer2D;
	
	pointer2D = allocPointer();
	printf("x,y의 값은 %d,%d입니다.", pointer2D->x, pointer2D->y);
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
	
	printf("x값을 입력하세요\n");
	scanf("%d", &pointer->x);
	printf("y값을 입력하세요\n");
	scanf("%d", &pointer->y);

	return pointer;
}