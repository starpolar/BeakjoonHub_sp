// 3058 짝수를 찾아라 / 12.4
#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);

	while (t--) {
		int min = 100, num, sum=0;
		for (int i = 0; i < 7; i++) {
			scanf("%d", &num);
			if (!(num % 2)) {
				sum += num;
				if (num < min) min = num;
			}
		}
		printf("%d %d\n", sum, min);
	}

	return 0;
}