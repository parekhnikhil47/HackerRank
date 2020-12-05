/**
 * Author   : Nikhil Parekh
 * Created  : 2020-12-04 11:37:33
 * Link     : GitHub.com/parekhnikhil47
 * Question :
**/

#include <stdio.h>

int main()
{

	char a[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int n;
	scanf("%i", &n);
	if (n < 10)
		printf("%s", a[n]);
	else
		printf("Greater than 9");

	return 0;
}
