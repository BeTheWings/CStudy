#include<stdio.h>
int main(void) {
	int a = 1, b = 2, c = 3;
	int result;
	/*%�� �������� ���ϴ°�*/
	result = a + b * c % 2;
	printf("result = %d\n", result);

	/*c�� 0���� ũ�⶧���� true*/

	result = a > b || c > 0;
	printf("result = %d\n", result);

	/*c�� 0���� ũ�⶧���� true*/
	result = a > b || c > 0 && b > c;
	printf("result = %d\n", result);

	/*&& and �ε� b�� c���� �۱� ������ false*/
	result = a = b = c; /*���Թ��̶� 3�� ���´�.*/
	printf("result = %d\n", result);

	return 0;
}