#include<stdio.h>

int main(void) {

	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* arr[5] = { &a,&b,&c,&d,&e };

	/*������ �迭�� a, b, c ,d, e, f�� �ּҰ��� �����Ͽ� *arr[i]���·� ����� �����ϴ�.*/
	 for (int i = 0;i < 5;i++) {
		 printf("%d������\n", sizeof(arr) / sizeof(int));
		 printf("%d\n",*arr[i]);
		
	}
	return 0;
}