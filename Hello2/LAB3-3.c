#include<stdio.h>
#include<limits.h>
int main(void) {
	int sam = INT_MAX;
	int samin = INT_MIN;
	unsigned int usa = UINT_MAX;
	

	int num1;
	int num2;
	unsigned int num3;
	unsigned int num4;
	

	num1 = samin - 1;
	num2 = sam + 1;


	num3 = 0 - 1;
	num4 = usa + 1;

	printf("int min���� -1 �� %d �Դϴ�.\n", num1);
	printf("int max���� +1��  %d �Դϴ�.\n", num2);
	
	printf("unsigned int min�� - 1 �� %u �Դϴ�.\n", num3);
	printf("unsigned int max�� + 1 �� %u �Դϴ�.\n", num4);



	return 0;
}