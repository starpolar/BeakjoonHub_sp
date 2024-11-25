// 10995 별 찍기 - 20 / 11.25
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int star = n, spadd = 0;
	while (n--) {
		if (spadd) printf(" ");
		for (int i = 0; i < star; i++) {
			printf("* ");
		}
		printf("\n");
		if (spadd == 0) spadd = 1;
		else spadd = 0;
	}

	return 0;
}