/**
 * Author   : Nikhil Parekh
 * Created  : 2020-12-04 12:03:47
 * Link     : GitHub.com/parekhnikhil47
 * Question :
**/

#include <stdio.h>

int main()
{

	char c[10][10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int a, b, n;
	scanf("%i %i", &a, &b);
	for (n = a; n <= b; n++)
		printf("%s\n", n < 10 ? c[n] : n % 2 ? "odd" : "even");
	return 0;
}
