// 10707 수도요금 / 12.8
#include <stdio.h>

int main() {

	int a, b, c, d, p;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);

	int xfee, yfee;
	xfee = a * p;
	yfee = b;
	if (p > c) yfee += (p - c) * d;
	xfee <= yfee ? printf("%d", xfee) : printf("%d", yfee);

	return 0;
}