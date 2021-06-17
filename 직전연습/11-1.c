#include <stdio.h>
#include <math.h>

#ifdef INT_COORD
typdef int COORD_TYPE;
#else
typedef double COORD_TYPE;
#endif

typedef struct point {
	COORD_TYPE x;
	COORD_TYPE y;
}POINT;

double Distance(const POINT* start, const POINT* end);

int main(void) {

	POINT pt1 = { 0,0 };
	POINT ptr2 = { 30,40 };
	POINT pt3 = { 0.1,0.1 };
	POINT pt4 = { 30.3,40.4 };

	printf("두점 사이의 거리: %d\n", Distance(&pt1, &ptr2));
	printf("두점 사이의 거리: %f\n", Distance(&pt3, &pt4));

	return 0;
}

double Distance(const POINT* start, const POINT* end) {

	COORD_TYPE dx = end->x - start->x;
	COORD_TYPE dy = end->y - start->y;
	return sqrt(dx * dx + dy * dy);
}
