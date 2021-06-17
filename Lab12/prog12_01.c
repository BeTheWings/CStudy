#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch1, ch2;

    if( argc < 3 )
    {
        printf("Usage: prog12_01.exe <<file_name1>> <<file_name2>>\n");
        return 1;
    }

    fp1 = fopen(argv[1], "r");
    if( fp1 == NULL )    
    { 
        printf("%s 파일을 열 수 없습니다.\n", argv[1]);
        return 1;
    }

    fp2 = fopen(argv[2], "r");
    if( fp2 == NULL )    
    { 
        printf("%s 파일을 열 수 없습니다.\n", argv[2]);
        return 1;
    }    
    
    while( 1 )
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if( ch1 != ch2 )
        {
            printf("두 파일이 다릅니다.\n");
            break;
        }
        if( ch1 == EOF && ch2 == EOF )
        {
            printf("두 파일이 같습니다.\n");
            break;
        }
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}