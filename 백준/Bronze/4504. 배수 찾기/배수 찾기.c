// 4504 배수 찾기 / 12.16
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int x;
	while (1) {
		scanf("%d", &x);
		if (!x) break;
		if (!(x % n)) printf("%d is a multiple of %d.\n", x, n);
		else printf("%d is NOT a multiple of %d.\n", x, n);
	}

	return 0;
}