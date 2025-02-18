// 5598 카이사르 암호 / 2.18
#include <stdio.h>
#include <string.h>

int main() {

	char s[1001] = { 0 };
	scanf("%s", s);

	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		if (s[i] - 'A' <= 2) {
			printf("%c", s[i] - 'A' + 'Z' - 2);
		}
		else {
			printf("%c", s[i] - 3);
		}
	}

	return 0;
}