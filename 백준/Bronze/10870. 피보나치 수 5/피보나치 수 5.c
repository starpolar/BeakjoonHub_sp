// 10870 피보나치 수 5 / 1.9
#include <stdio.h>

int main() {

	int n, arr[21] = { 0, 1 };
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("%d", arr[n]);

	return 0;
}