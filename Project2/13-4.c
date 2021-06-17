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
		printf("종료를 원하시면 1을 눌러주세요");
		scanf("%d", &select);
		switch(select) {
			
		case 1:
			exit(0);
			break;
		default:
			printf("점의 x,y좌표, 이동할 x,y값을 순서대로 입력하시오:\n");
			scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
			int resultX = p1.x + p2.x;
			int resultY = p1.x + p2.y;

			printf("이동한 점의 좌표는 (%d,%d)입니다.", resultX, resultY);
			break;

		}

	}
	return 0;
}