// 30802 웰컴 키트 / 12.2
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int tsize[6];
	for (int i = 0; i < 6; i++) {
		scanf("%d", &tsize[i]);
	}

	int t, p;
	scanf("%d %d", &t, &p);

	int tsum = 0;
	for (int i = 0; i < 6; i++) {
		if (!(tsize[i] % t)) tsum += (int)tsize[i] / t;
		else tsum += (int)tsize[i] / t + 1;
	}

	printf("%d\n%d %d", tsum, (int)n / p, n % p);

	return 0;
}