// 10996 별 찍기 - 21 / 1.26
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	if (n == 1) {
		printf("*");
		return 0;
	}
	char f_star = 1;
	for (int i = 0; i < n*2; i++) {
		for (int j = 0; j < n; j++) {
			if (f_star) {
				printf("*");
				f_star = 0;
			}
			else {
				printf(" ");
				f_star = 1;
			}
		}
		if (!(n % 2)) {
			if (f_star) f_star = 0;
			else f_star = 1;
		}
		
		printf("\n");
	}

	return 0;
}