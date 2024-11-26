// 10103 주사위 게임 / 11.26
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int a, b, apo=100, bpo=100;
	while (n--) {
		scanf("%d %d", &a, &b);
		if (a > b) {
			bpo -= a;
		}
		else if (a < b) {
			apo -= b;
		}
	}
	printf("%d\n%d", apo, bpo);

	return 0;
}