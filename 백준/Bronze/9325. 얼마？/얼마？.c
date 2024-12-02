// 9325 얼마 ? / 12.2
#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);

	while (t--) {
		int price, option;
		scanf("%d %d", &price, &option);
		int total = price;
		while (option--) {
			int q, p;
			scanf("%d %d", &q, &p);
			total += q * p;
		}
		printf("%d\n", total);
	}

	return 0;
}