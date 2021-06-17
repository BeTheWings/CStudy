#include<stdio.h>

int main(void) {

	double money = 1000000;
	int year;
	double TotalMoney;
	printf("예치 기간을 년 단위로 입력해주세요.\n");
	scanf("%d", &year);

	TotalMoney = money*(1 + 0.045 * year);
	printf("총금액: %f", TotalMoney);
	return 0;

}