#include<stdio.h>

typedef struct point {
	int x;
	int y;
}Pointer;

int main(void) {
	Pointer p1;
	Pointer p2;
	int select = 1;
	while (1) {
		printf("���Ḧ ���Ͻø� 1�� �����ּ���");
		scanf("%d", &select);
		switch(select) {
			
		case 1:
			exit(0);
			break;
		default:
			printf("���� x,y��ǥ, �̵��� x,y���� ������� �Է��Ͻÿ�:\n");
			scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
			int resultX = p1.x + p2.x;
			int resultY = p1.x + p2.y;

			printf("�̵��� ���� ��ǥ�� (%d,%d)�Դϴ�.", resultX, resultY);
			break;

		}

	}
	return 0;
}