#include<stdio.h>
#include <math.h>
/*직선의 시작점과 끝점을 맴버로 같는 line 구조체와 typedef를 정의하시오*/
/*직선의 시작점,끝점 좌표를 입력 받아 직선의 길이를 구해서 출력하는 프로그램을 작성하시오*/
/*scanf사용시 구조체 변수 주소값 전달*/
struct point {
	int x, y;
};
typedef struct point POINT;

struct line {
	POINT SP,EP;
};
typedef struct line Line;

int main(void) {
	Line a;
	printf("시작점x,y를 입력해주세요\n");
	scanf("%d %d", &a.SP.x,&a.SP.y);
	
	printf("끝점x,y를 입력해주세요\n");
	scanf("%d %d", &a.EP.x, &a.EP.y);
	
	int b = a.EP.x - a.SP.x;

	int c = a.EP.y - a.SP.y;
	
	double result = sqrt(pow(b,2) + pow(c, 2));

	printf("직선의 길이는 %f입니다.", result);
	return 0;

}