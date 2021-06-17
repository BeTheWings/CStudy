#include<stdio.h>


   char a;

int main(void) {

	printf("하나의 대문자를 입력해주세요.");
	scanf("%C", &a);
	
	
	for (int i = 0;i < 7;i++) {

		for (int j = 0;j < 7 - i;j++) {
			printf(" ");
		}

		for (int k = 0;k < 2 * i + 1;k++) {
			printf("%C", a);
		}
		printf("\n");
	}


	/*공백을 먼저 생각하기*/
	/*공백을 출력하는 코드 후에 아스키 코드를 출력하는 코드*/
	return 0;
}