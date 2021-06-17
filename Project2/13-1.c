#include <stdio.h>
#include<math.h>

typedef struct Point2D {
	int x; 
	int y;
}Pointer;


int main(void) {
	Pointer pointer1;
	Pointer pointer2;
	Pointer pointer3;
	Pointer pointer4;

	printf("직사각형의 좌표 x1y1에서부터 x4y4까지 차례대로 입력해주세요.\n");
	printf("첫좌표를 입력해주세요");
	scanf("%d %d", &pointer1.x, &pointer1.y);
	printf("두번째 좌표를 입력해주세요");
	scanf("%d %d", &pointer2.x, &pointer2.y);
	printf("세번째 좌표를 입력해주세요");
	scanf("%d %d", &pointer3.x, &pointer3.y);
	printf("네번째 좌표를 입력해주세요");
	scanf("%d %d", &pointer4.x, &pointer4.y);
	//12
	int a = pointer2.x - pointer1.x;
	int c = pointer2.y - pointer1.y;
	double result1 = sqrt(pow(a, 2) + pow(c, 2));
	//23
	int ab = pointer3.x - pointer2.x;
	int bc = pointer3.y - pointer2.y;
	double result3 = sqrt(pow(ab, 2) + pow(bc, 2));
	
	//34
	int b = pointer4.x - pointer3.x;
	int d = pointer4.y - pointer3.y;
	double result2 = sqrt(pow(b, 2) + pow(d, 2));
	
	double finalResult = result1 + result2+result3;


	printf("총 선 길이의 합:%.2lf", finalResult);


	return 0;
}