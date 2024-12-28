// 11023 더하기 3 / 12.29
#include <stdio.h>

int main() {

	int num, sum=0;
	while (scanf("%d", &num) != EOF) {
		sum += num;
	}
	printf("%d", sum);

	return 0;
}