#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main(void) {
     
	int (*fp[4])(int, int);
		fp[0] = add;
		fp[1] = sub;
		fp[2] = mul;
		fp[3] = div;
		int select=0;
		int a=0;
		int b=0;
		printf("�Լ� ��ȣ�� ����� ���� �Է��ϼ���.");
		scanf("%d %d %d", &select, &a, &b);
		printf("�� ���� ���� %d�Դϴ�.", fp[select - 1](a, b));

	return 0;
}
int mul(int a, int b) {
	return a * b;
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}

int div(int a, int b) {

	return a / b;
}

