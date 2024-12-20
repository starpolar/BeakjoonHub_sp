// 17614 369 / 12.20
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int cnt=0;
	for (int i = 1; i <= n; i++) {
		int num = i;
		while (num) {
			if (!(num % 10 % 3) && (num % 10) != 0) cnt++;
			num /= 10;
		}			
	}

	printf("%d", cnt);

	return 0;
}