// 3460 이진수 / 11.23
#include <stdio.h>

int main() {

	int t, n;
	scanf("%d", &t);

	int binary, i;
	while (t--) {
		scanf("%d", &n);

		for (i = 0; i <= 19; i++) {
			binary = (n >> i) & 1;
			if (binary == 1) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}

	return 0;
}