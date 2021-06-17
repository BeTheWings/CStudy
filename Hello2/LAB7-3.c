#include<stdio.h>
/*rect ����ü point ����ü*/
/*���簢�� ��ǥ�� ������ ��ǥ�� �Է� �޾Ƽ� �� ���� ���簢�� ������ ������ �˻��ϴ� ���α׷� �ۼ�*/
/*���簢���� �»������ �׻� �Ĵ������� �۾ƾ� �Ѵ�. �ƴ� ��� �� ���� ��ü�϶�*/
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
	printf("���簢���� ��ǥx1y1x2y2�� �Է����ּ���\n");
	scanf("%d %d %d %d", &r.p1.x, &r.p1.y, &r.p2.x, &r.p2.y);
	printf("���� ��ǥ�� �Է��Ͻÿ�\n");
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
		printf("%d,%d���� ���簢�� ���ο� �ֽ��ϴ�.", pt.x,pt.y);
	}else {
		printf("%d,%d���� ���簢�� ���ο� �����ϴ�.", pt.x,pt.y);
	}
	return 0;
}
int IsPointInRect(POINT* pt,Rec* rec)
{
	return(pt->x >= rec->p1.x && pt->x <= rec->p2.x && pt->y >= rec->p1.y && pt->y <= rec->p2.y);
}