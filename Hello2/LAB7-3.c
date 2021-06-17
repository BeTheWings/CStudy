#include<stdio.h>
/*rect 구조체 point 구조체*/
/*직사각형 좌표와 한점의 좌표를 입력 받아서 그 점이 직사각형 내부의 점인지 검사하는 프로그램 작성*/
/*직사각형의 좌상단점은 항상 후단점보다 작아야 한다. 아닐 경우 두 값을 교체하라*/
struct point {
	int x, y;
};
typedef struct point POINT;

struct rec {
	POINT p1;
	POINT p2;

};
typedef struct rec Rec;

int IsPointInRect(POINT*pt, Rec*rec);

int main(void) {
	Rec r;
	POINT pt;
	printf("직사각형의 좌표x1y1x2y2를 입력해주세요\n");
	scanf("%d %d %d %d", &r.p1.x, &r.p1.y, &r.p2.x, &r.p2.y);
	printf("점의 좌표를 입력하시오\n");
	scanf("%d %d", &pt.x, &pt.y);

	if (r.p1.x>r.p2.x&&r.p1.y>r.p2.y) {
		int temp = r.p1.x;
		r.p1.x = r.p2.x;
		r.p2.x = temp;
		int temp2 = r.p1.y;
		r.p1.y = r.p2.y;
		r.p2.y = temp2;


    }else if (r.p1.x > r.p2.x) {
		int temp = r.p1.x;
		r.p1.x = r.p2.x;
		r.p2.x = temp;
	}	else if (r.p1.y > r.p2.y) {
		int temp = r.p1.y;
		r.p1.y = r.p2.y;
		r.p2.y = temp;
	}
	if (IsPointInRect(&pt, &r)) {
		printf("%d,%d점은 직사각형 내부에 있습니다.", pt.x,pt.y);
	}else {
		printf("%d,%d점은 직사각형 내부에 없습니다.", pt.x,pt.y);
	}
	return 0;
}
int IsPointInRect(POINT* pt,Rec* rec)
{
	return(pt->x >= rec->p1.x && pt->x <= rec->p2.x && pt->y >= rec->p1.y && pt->y <= rec->p2.y);
}