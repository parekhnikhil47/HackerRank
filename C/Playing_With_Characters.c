/**s
 * Author   : Nikhil Parekh
 * Created  : 2020-12-04 15:07:13
 * Link     : GitHub.com/parekhnikhil47
 * Question :
**/

#include <stdio.h>

int main()
{
	char a, b[100], c[100];
	scanf("%c %s %[^\n]", &a, &b, &c);
	printf("%c\n%s\n%s\n", a, b, c);
	return 0;
}
