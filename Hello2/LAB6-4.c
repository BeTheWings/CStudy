#include<stdio.h>
#include<string.h>
#define Max 100
void Encrypt(char *arr);

int main(void) {
	char str[Max];
	printf("����ܾ �Է����ּ���\n");
	gets(str);

	Encrypt(str);
}
void Encrypt(char *str) {
	int i;
	for(i =0;i<Max;i++){
		if (str[i] >= 'b' && str[i] <= 'y') {
			str[i] = str[i] + 1;
		}
		else if(str[i]=='a'){
			str[i] = str[i] + 25;
		}
		else if (str[i] == 'z') {
			str[i] = str[i] - 25;
		}
		else if (str[i] >= 'B' && str[i] <= 'Y') {
			str[i] = str[i] + 1;
		}
		else if (str[i] == 'A') {
			str[i] = str[i] + 25;
		}
		else if (str[i] == 'Z') {
			str[i] = str[i] - 25;
		}
	}
	printf("��ȣȭ�� ���ڿ��� %s�Դϴ�.",str);

}