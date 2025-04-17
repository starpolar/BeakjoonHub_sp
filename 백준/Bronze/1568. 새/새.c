// 1568 새 / 4.17
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int k=1, sec=0;
	while (1) {
		n -= k++;
		if (k > n) k = 1;
		sec++;
		if (n == 0) {
			printf("%d", sec);
			break;
		}
	}

	return 0;
}