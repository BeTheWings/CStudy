#include<stdio.h>


   char a;

int main(void) {

	printf("�ϳ��� �빮�ڸ� �Է����ּ���.");
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


	/*������ ���� �����ϱ�*/
	/*������ ����ϴ� �ڵ� �Ŀ� �ƽ�Ű �ڵ带 ����ϴ� �ڵ�*/
	return 0;
}