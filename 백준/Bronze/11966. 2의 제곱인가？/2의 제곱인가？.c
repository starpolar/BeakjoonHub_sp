// 11966 2의 제곱인가 ? / 12.24
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	if (n == 1)printf("1");
	else printf("%d", !(n&(n-1)));

	return 0;
}