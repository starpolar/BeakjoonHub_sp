// 10093 숫자 / 2.10
#include <stdio.h>

#define llu unsigned long long

int main() {

	llu a, b;
	scanf("%llu %llu", &a, &b);
	if (a > b) {
		llu tmp = b;
		b = a;
		a = tmp;
	}

	int cnt =b-a;
	if (cnt) cnt--;
	printf("%d\n", cnt);
	for (llu i = a+1; i < b; i++) {
		printf("%llu ", i);
	}

	return 0;
}