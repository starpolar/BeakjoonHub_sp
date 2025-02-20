// 15969 행복 / 2.20
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int point, min = 1000, max = 0;;
	while (n--) {
		scanf("%d", &point);
		if (min > point) min = point;
		if (max < point) max = point;
	}

	printf("%d", max - min);

	return 0;
}