#include <stdio.h>

int determinant(int a1, int b1, int c1, int a2, int b2, int c2);

int main()
{
	int a1, b1, c1, a2, b2, c2;
	printf("Enter a1 b1 c1: ");
        scanf("%d %d %d", &a1, &b1, &c1);
        printf("Enter a2 b2 c2: ");
        scanf("%d %d %d", &a2, &b2, &c2);
	determinant(a1, b1, c1, a2, b2, c2);
	return 0;
}

int determinant(int a1, int b1, int c1, int a2, int b2, int c2)
{
	float det = a1 * b2 - a2 * b1;
	float detx = c1 * b2 - c2 * b1;
	float dety = a1 * c2 - a2 * c1;
	float x = detx / det;
	float y = dety / det;
	printf("x = %f\ny = %f\n", x, y);
	return x, y;
}
