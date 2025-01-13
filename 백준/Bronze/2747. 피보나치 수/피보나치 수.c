// 2747 피보나치 수 / 1.13
#include <stdio.h>

int main() {

	int nArr[46] = { 0, 1 }, n;
	scanf("%d", &n);

	
	for (int i = 2; i <= n; i++) {
		nArr[i] = nArr[i - 1] + nArr[i - 2];
	}
	printf("%d", nArr[n]);

	return 0;
}