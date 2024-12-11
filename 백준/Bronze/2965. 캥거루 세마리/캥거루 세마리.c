// 2965 캥거루 세마리 / 12.11
#include <stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int cnt;
	if (b - a <= c - b) cnt = c - b - 1;
	else cnt = b - a - 1;

	printf("%d", cnt);

	return 0;
}