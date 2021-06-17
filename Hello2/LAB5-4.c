#include<stdio.h>
   
int sum; 

int main(void) {

	/*1~100까지의 숫자 중 7의 배수가 아닌 숫자를 더한 합을 구하시오*/
	int i = 1;

	for (int i = 1;i <= 100;i++) {
	
		if (i % 7 == 0) {
			
			continue;
		}
		sum = sum + i;
		
	}
	printf("7의 배수가 아닌 숫자를 모두 더한 값은%d 입니다.",sum);
	
	return 0;
}

