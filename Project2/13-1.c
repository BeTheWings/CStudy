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

	printf("���簢���� ��ǥ x1y1�������� x4y4���� ���ʴ�� �Է����ּ���.\n");
	printf("ù��ǥ�� �Է����ּ���");
	scanf("%d %d", &pointer1.x, &pointer1.y);
	printf("�ι�° ��ǥ�� �Է����ּ���");
	scanf("%d %d", &pointer2.x, &pointer2.y);
	printf("����° ��ǥ�� �Է����ּ���");
	scanf("%d %d", &pointer3.x, &pointer3.y);
	printf("�׹�° ��ǥ�� �Է����ּ���");
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


	printf("�� �� ������ ��:%.2lf", finalResult);


	return 0;
}