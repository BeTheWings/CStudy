#include<stdio.h>
   
int sum; 

int main(void) {

	/*1~100������ ���� �� 7�� ����� �ƴ� ���ڸ� ���� ���� ���Ͻÿ�*/
	int i = 1;

	for (int i = 1;i <= 100;i++) {
	
		if (i % 7 == 0) {
			
			continue;
		}
		sum = sum + i;
		
	}
	printf("7�� ����� �ƴ� ���ڸ� ��� ���� ����%d �Դϴ�.",sum);
	
	return 0;
}

