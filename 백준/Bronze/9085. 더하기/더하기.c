// 9085 더하기 / 11.25
#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);
		int sum = 0;
		while (n--) {
			int d;
			scanf("%d", &d);

			sum += d;
		}
		printf("%d\n", sum);
	}

	return 0;
}