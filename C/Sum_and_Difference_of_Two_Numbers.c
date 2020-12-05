/**
 * Author   : Nikhil Parekh
 * Created  : 2020-12-04 15:46:58
 * Link     : GitHub.com/parekhnikhil47
 * Question :
**/

#include <stdio.h>

int main()
{
	int a, b;
	float c, d;
	scanf("%i %i", &a, &b);
	scanf("%f %f", &c, &d);
	printf("%i %i\n", (a + b), (a - b));
	printf("%.1f %.1f\n", (c + d), (c - d));
	return 0;
}
