// 9610 사분면 / 11.30
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int x, y, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, axis = 0;
	while (n--) {
		scanf("%d %d", &x, &y);

		if (x == 0 || y == 0) {
			axis++;
			continue;
		}
		if (x > 0) {
			if (y > 0) {
				Q1++;
			}
			else {
				Q4++;
			}
		}
		else {
			if (y > 0) {
				Q2++;
			}
			else {
				Q3++;
			}
		}
	}

	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", Q1, Q2, Q3, Q4, axis);

	return 0;
}