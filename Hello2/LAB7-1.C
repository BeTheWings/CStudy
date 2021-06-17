#include<stdio.h>
#define MAX 5
/*rect 구조체를 정의하고 크기가 5인 구조체 배열을 선언한다.*/

struct rec {
	int left;
	int top;
	int right;
	int bottom;
};

int main(void) {
	struct rec arr[MAX];
	printf("rect구조체의 정보를 입력해주세요");
	for (int i = 0;i < MAX;i++) {
		printf("left값을 입력해주세요\n");
		scanf("%d", &arr[i].left);
		printf("top값을 입력해주세요\n");
		scanf("%d", &arr[i].top);
		printf("right값을 입력해주세요\n");
		scanf("%d", &arr[i].right);
		printf("bottom값을 입력해주세요\n");
		scanf("%d", &arr[i].bottom);
	}
	
	for (int i = 0;i < MAX;i++) {
		printf("직사각형 %d의 좌표 값은 %d,%d와 %d,%d입니다.\n", i+1,arr[i].left, arr[i].top, arr[i].right, arr[i].bottom);
		int width = abs(arr[i].right - arr[i].left);
		int height = abs(arr[i].bottom - arr[i].top);
		int area = width * height;
	
		printf("직사각형의 width: %d height: %d이며 넓이는 %d입니다.\n", width,height,area);

	}
	
	return 0;
}