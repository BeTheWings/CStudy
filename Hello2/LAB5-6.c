#include<stdio.h>

	 int g_result;
	 int minusValue(int value);
	 int plusValue(int value);
int main(void) {
	int value;
	char operator;
	while (1) {
		printf("���ϴ� ����(+ Ȥ�� -)�� �������� �Է��ϼ��� ���̻� �Է����� �ʰ��� �� ���� 0�� �Է��ϼ���\n");
		scanf("%c", &operator);
		
		if (operator=='0'){			
			printf("���� ���� %d �Դϴ�.",g_result);
			break;
		}else if (operator=='+') {		
			scanf("%d", &value);
			getchar();
			plusValue(value);
		}
		else if (operator=='-') {	
			scanf("%d", &value);
			getchar();
			minusValue(value);
		}
	}
	return 0;
}
int plusValue(int value) {
	g_result = g_result+value;
	
}

int minusValue(int value) {
	g_result = g_result- value;
}