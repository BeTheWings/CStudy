#include<stdio.h>
/*�ƽ�ũ �ڵ� ���� �Է� �޾� �� ASCII �ڵ� ���� �ش��ϴ� ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�*/
int main(void) {

	int asciiVal;

	printf("ASCHII �ڵ� ���� �Է��ϼ���:");
	scanf("%d", &asciiVal);
	printf("ASCHII �ڵ� %d�� �ش��ϴ� ���� %C�Դϴ�.\n", asciiVal, asciiVal);
	return 0;
}