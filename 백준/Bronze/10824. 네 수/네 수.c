// 10824 네 수 / 11.19
#include <stdio.h>
#include <stdlib.h>

int main() {

	char a[20], b[20], c[20], d[20];
	scanf("%s %s %s %s", &a, &b, &c, &d);

	long long ab, cd;
	strcat(a, b);
	ab = atoll(a);
	strcat(c, d);
	cd = atoll(c);

	printf("%lld", ab + cd);
		
	return 0;
}