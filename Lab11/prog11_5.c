#include <stdio.h>

#define MAKE_RGB(red, green, blue) ((red & 0xff) | ((green & 0xff) << 8) | ((blue & 0xff) << 16))
#define GET_RED(rgb)   (unsigned char) ((rgb) & 0x0000ff)
#define GET_GREEN(rgb) (unsigned char) (((rgb) & 0x00ff00) >> 8)
#define GET_BLUE(rgb)  (unsigned char) (((rgb) & 0xff0000) >> 16)
            
int main(void)
{
    unsigned int r, g, b;
    unsigned int rgb;

    printf("Red를 입력하세요(0~255)   : ");
    scanf("%d", &r); 

    printf("Green을 입력하세요(0~255) : ");
    scanf("%d", &g);
         
    printf("Blue를 입력하세요(0~255)  : ");
    scanf("%d", &b);  
    
    rgb = MAKE_RGB(r, g, b);
    printf("RGB 값 : %06X\n", rgb);

    printf("RGB 값 %06X 중 Red   : %3d\n", rgb, GET_RED(rgb));
    printf("RGB 값 %06X 중 Green : %3d\n", rgb, GET_GREEN(rgb));
    printf("RGB 값 %06X 중 Blue  : %3d\n", rgb, GET_BLUE(rgb));

    return 0;
}
