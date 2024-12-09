// 5988 홀수일까 짝수일까 / 12.9
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	char k[70];
	while (n--) {
		scanf("%s", &k);
		int num;
		for (int i = 0; i < 70; i++) {
			if (k[i + 1] == NULL) {
				num = k[i] - '0';
				break;
			}
		}
		printf("%s\n", num % 2 ? "odd" : "even");
	}

	return 0;
}