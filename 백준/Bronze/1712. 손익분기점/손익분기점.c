// 1712 손익분기점 / 1.11
#include <stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	c -= b;
	if (c <= 0) {
		printf("-1");
		return 0;
	}
	a /= c;
	printf("%d", ++a);

	return 0;
}