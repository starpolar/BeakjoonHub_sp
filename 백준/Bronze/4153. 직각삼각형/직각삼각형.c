// 4153 직각삼각형 / 10.27
#include <stdio.h>

int main() {

	int a, b, c, tmp;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);

		if (c < a) {
			tmp = a;
			a = c;
			c = tmp;
		}
		else if (c < b) {
			tmp = b;
			b = c;
			c = tmp;
		}

		if (a == 0 && b == 0 & c == 0) {
			break;
		}
		else if (a * a + b * b == c * c) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}

	return 0;
}