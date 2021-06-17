#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct rect {
    int left, top, right, bottom;
} RECT;

void PrintRect(const RECT *rt);
int Width(const RECT *rt);
int Height(const RECT *rt);

int main(int argc, char* argv[])
{
    RECT rt;
    
    if( argc < 5 )
    {
        printf("Usage: 11_6.exe <<left>> <<top>> <<right>> <<bottom>>\n");
        return -1;
    }

    rt.left = atoi(argv[1]);
    rt.top = atoi(argv[2]);
    rt.right = atoi(argv[3]);
    rt.bottom = atoi(argv[4]);

    PrintRect(&rt);
    printf("직사각형의 면적 : %d\n", Width(&rt)*Height(&rt));
    printf("직사각형의 둘레 : %d\n", 2*(Width(&rt)+Height(&rt)));

    return 0;
}

void PrintRect(const RECT *rt)
{
    printf("[ 좌상단점=(%d,%d),우하단점=(%d,%d),폭=%d,높이=%d ]\n",
        rt->left, rt->top, rt->right, rt->bottom, Width(rt), Height(rt));
}

int Width(const RECT *rt)
{
    int width = rt->right - rt->left;
    return width > 0 ? width : -width;
}

int Height(const RECT *rt)
{
    int height = rt->bottom - rt->top;
    return height > 0 ? height : -height;
}
