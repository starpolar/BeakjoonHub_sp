// 11966 2의 제곱인가 ? / 12.24
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	printf("%d", !(n&(n-1))); // 제곱수다..

	return 0;
}