/**
 * Author   : Nikhil Parekh
 * Created  : 2020-12-04 16:07:14
 * Link     : GitHub.com/parekhnikhil47
 * Question :
 **/

#include <stdio.h>
int max_of_four(int a, int b, int c, int d) {
	return a > b ? a > c ? a > d ? a : d : c > d ? c : d : b > c ? b > d ? b : d : c;
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);
	return 0;
}
