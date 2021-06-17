#include<stdio.h>
struct point {
	int x, y;
};
typedef struct point POINT;
struct rec {
	POINT p1;
	POINT p2;
};
typedef struct rec Rec;
void inputRect(Rec * rec);
void CenterOfRect(Rec* rec);
/*중점구하는 공식 (x2+x1),(y2+y1)*/
int main(void) {
	Rec r;
	inputRect(&r);
	CenterOfRect(&r);
	return 0;
}
void inputRect(Rec* rec) {
	printf("사각형의 정보를 입력해주세요\n");
	scanf("%d%d%d%d",&rec->p1.x,&rec->p1.y,&rec->p2.x,&rec->p2.y);
	printf("직사각형의 x1=%d,y1=%d,x2=%d,y2=%d", rec->p1.x, rec->p1.y, rec->p2.x, rec->p2.y);
}
 void CenterOfRect(Rec* rec) {
	 int centerX=(rec->p2.x+rec->p1.x)/2;
	 int centerY= (rec->p2.y + rec->p1.y) / 2;
	 printf("중심포인터 x와 y값은 %d과%d입니다.", centerX, centerY);
}

