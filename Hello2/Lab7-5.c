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
/*�������ϴ� ���� (x2+x1),(y2+y1)*/
int main(void) {
	Rec r;
	inputRect(&r);
	CenterOfRect(&r);
	return 0;
}
void inputRect(Rec* rec) {
	printf("�簢���� ������ �Է����ּ���\n");
	scanf("%d%d%d%d",&rec->p1.x,&rec->p1.y,&rec->p2.x,&rec->p2.y);
	printf("���簢���� x1=%d,y1=%d,x2=%d,y2=%d", rec->p1.x, rec->p1.y, rec->p2.x, rec->p2.y);
}
 void CenterOfRect(Rec* rec) {
	 int centerX=(rec->p2.x+rec->p1.x)/2;
	 int centerY= (rec->p2.y + rec->p1.y) / 2;
	 printf("�߽������� x�� y���� %d��%d�Դϴ�.", centerX, centerY);
}

