#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	FILE* fp1, * fp2;

	if (argc < 3) {
		printf("Usage: FCopy src_file dest_file");
		return -1;
	}

	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL) {
		printf("%s 파일 열기 실패\n", argv[1]);
		return -1;
	}

	fp2 = fopen(argv[2], "r");
	if (fp2 == NULL) {
		printf("%s 파일 열기 실패\n", argv[2]);
		return -1;
	}

	while (1) {
		char a = fgetc(fp1);
		char b = fgetc(fp2);
	
		if (a == EOF || b == EOF) {
			break;
		}else if (a != b) {
			printf("서로 다른 파일 입니다.\n");
			return 0;
		}
	}
	printf("두파일은 같습니다.");
	fclose(fp1);
	fclose(fp2);

	return 0;
}