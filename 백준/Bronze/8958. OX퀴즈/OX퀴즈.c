// 8958 OX퀴즈 / 1.8
#include <stdio.h>
#include <string.h>

int main() {

	int t;
	scanf("%d", &t);

	char s[81] = { 0 };
	while (t--) {
		scanf("%s", s);
		int point = 0, sum = 0;;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == 'O') {
				sum += ++point;
			}
			else {
				point = 0;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}