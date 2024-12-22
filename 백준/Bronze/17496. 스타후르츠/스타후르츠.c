// 17496 스타후르츠 12.22
#include <stdio.h>

int main() {

	int n, t, c, p;
	scanf("%d %d %d %d", &n, &t, &c, &p);

	int day = (n - 1) / t;
	day *= c;
	printf("%d", day * p);

	return 0;
}