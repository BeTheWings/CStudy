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
void printfRect(Rec * rec);
void NormalizeRect(Rec * rec);
int IsPointInRect(POINT* pt, Rec* r);

int main(void) {
	Rec r;
	POINT pt;
	printf("직사각형의 좌표x1y1x2y2를 입력해주세요\n");
	scanf("%d %d %d %d", &r.p1.x, &r.p1.y, &r.p2.x, &r.p2.y);
	printfRect(&r);
	printf("----정규화 후 Rect의 값---\n");
	NormalizeRect(&r);
	printfRect(&r);
	printf("점의 좌표를 입력하시오\n");
	scanf("%d %d", &pt.x, &pt.y);

	if (IsPointInRect(&pt, &r)) {
		printf("%d,%d점은 직사각형 내부에 있습니다.\n", pt.x, pt.y);
	}
	else {
		printf("%d,%d점은 직사각형 내부에 없습니다.\n", pt.x, pt.y);
	}
	return 0;
}
void printfRect(Rec * rec) {
	printf("직사각형의 좌표는 x1=%d,y1=%d,x2=%d,y2=%d입니다.\n", rec->p1.x, rec->p1.y, rec->p2.x, rec->p2.y);
}
void NormalizeRect(Rec* rec) {
	if (rec->p1.x > rec->p2.x && rec->p1.y > rec->p2.y) {
		int temp = rec->p1.x;
		rec->p1.x = rec->p2.x;
		rec->p2.x = temp;
		int temp2 = rec->p1.y;
		rec->p1.y = rec->p2.y;
		rec->p2.y = temp2;
	
	}
	else if (rec->p1.x > rec->p2.x) {
		int temp = rec->p1.x;
		rec->p1.x = rec->p2.x;
		rec->p2.x = temp;
		

	}
	else if (rec->p1.y > rec->p2.y) {
		int temp = rec->p1.y;
		rec->p1.y = rec->p2.y;
		rec->p2.y = temp;


	}
}
int IsPointInRect(POINT* pt, Rec* rec)
{
	return(pt->x >= rec->p1.x && pt->x <= rec->p2.x && pt->y >= rec->p1.y && pt->y <= rec->p2.y);
}