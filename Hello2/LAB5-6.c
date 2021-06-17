#include<stdio.h>

	 int g_result;
	 int minusValue(int value);
	 int plusValue(int value);
int main(void) {
	int value;
	char operator;
	while (1) {
		printf("원하는 연산(+ 혹은 -)과 정수값을 입력하세요 더이상 입력하지 않고자 할 때는 0을 입력하세요\n");
		scanf("%c", &operator);
		
		if (operator=='0'){			
			printf("계산된 값은 %d 입니다.",g_result);
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