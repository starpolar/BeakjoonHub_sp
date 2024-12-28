// 3004 체스판 조각 / 12.28
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int res = 1, add=1;
	for (int i = 1; i <= n; i++) {
		if (!(i % 2)) add++;
		res += add;
	}

	printf("%d", res);

	return 0;
}