/**
 * Author   : Nikhil Parekh
 * Created  : 2020-12-04 13:08:52
 * Link     : GitHub.com/parekhnikhil47
 * Question :
**/

#include <stdio.h>

int main()
{

	int n, sum = 0, i;
	scanf("%i", &n);
	/* for (i=n; i>0; i/=10)
	sum+=i%10; */
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}

	printf("%i", sum);
	return 0;
}
