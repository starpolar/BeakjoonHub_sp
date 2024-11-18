// 10992 별 찍기 - 17 / 11.16
#include <stdio.h>

int main() {

	int n, last;
	scanf("%d", &n);
	last = n + (n - 1);

	int spad = n - 1, star = 1, mpad=-1;
	int cycle = n - 1;
	while (cycle--) {
		for (int i = 0; i < spad; i++) {
			printf(" ");
		}
		printf("*");
		if (mpad >= 1) {
			mpad += 2;
		}
		else {
			mpad++;
		}
		if (mpad) {
			for (int i = 0; i < mpad; i++) {
				printf(" ");
			}
			printf("*");
		}
		star++;

		spad--;
		printf("\n");
	}
	for (int i = 0; i < last; i++) {
		printf("*");
	}

	return 0;
}