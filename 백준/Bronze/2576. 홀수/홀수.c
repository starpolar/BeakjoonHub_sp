// 2576 홀수 / 11.11
#include <stdio.h>

int main() {

	int n = 7, num, min=100, sum=0;
	while (n--) {
		scanf("%d", &num);

		if (!(num % 2 == 1)) continue;

		if (min > num) {
			min = num;
		}
		sum += num;
	}
	if (sum == 0) {
		printf("-1");
		return 0;
	}
	printf("%d\n%d", sum, min);

	return 0;
}