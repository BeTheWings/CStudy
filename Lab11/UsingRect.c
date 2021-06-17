/* Lab09.c */
#include <stdio.h>
#define COUNT 5

struct rect {
    int left, top, right, bottom;
};
typedef struct rect RECT;

int main( )
{
    RECT rects[COUNT] = {
        { 10, 10, 30, 30 },
        { 20, 20, 70, 70 },
        { 15,  5, 80, 90 },
        {  5, 10, 40, 50 },
        { 50, 30, 90, 99 },
    };
    int i;

    for( i = 0; i < COUNT ; i++ )
    {
        printf("�»����/���ϴ����� ��ǥ�� �Է��ϼ���(left, top, right, bottom ��)\n");
        scanf("%d %d %d %d", &rects[i].left, &rects[i].top, &rects[i].right, &rects[i].bottom);
    }

    for( i = 0; i < COUNT; i++ )
    {
        int width = rects[i].right - rects[i].left;
        int height = rects[i].bottom - rects[i].top;

        width = width > 0 ? width : -width;
        height = height > 0 ? height : -height;

        printf("%d ��° ���簢�� : ", i+1);
        printf("�»����=(%d,%d)  ���ϴ���=(%d,%d)  ��=%d  ����=%d\n", 
            rects[i].left, rects[i].top, rects[i].right, rects[i].bottom, width, height);

    }
    return 0;
}