#include<stdio.h>

int main(void) {

	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* arr[5] = { &a,&b,&c,&d,&e };

	/*포인터 배열에 a, b, c ,d, e, f의 주소값을 저장하여 *arr[i]형태로 출력이 가능하다.*/
	 for (int i = 0;i < 5;i++) {
		 printf("%d사이즈\n", sizeof(arr) / sizeof(int));
		 printf("%d\n",*arr[i]);
		
	}
	return 0;
}