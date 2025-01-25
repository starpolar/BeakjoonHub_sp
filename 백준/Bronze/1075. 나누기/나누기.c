// 1075 나누기 / 1.25
#include <stdio.h>

int main() {

	int n, f;
	scanf("%d %d", &n, &f);

	n -= (n % 100);

	while (1) {
		if (n % f == 0) break;
		n++;
	}
	int res = n % 100;
	if (res < 10) printf("0%d", res);
	else printf("%d", res);

	return 0;
}