// 10990 별 찍기 - 15 / 11.29
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int spad = n - 1, mpad = 0;
	while (n--) {
		for (int i = 0; i < spad; i++) {
			printf(" ");
		}
		printf("*");
		if (mpad) {
			for (int i = 0; i < mpad; i++) {
				printf(" ");
			}
			printf("*");
			mpad++;
		}
		printf("\n");
		spad--;
		mpad++;
	}

	return 0;
}