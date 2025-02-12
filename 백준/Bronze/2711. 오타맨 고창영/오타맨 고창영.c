// 2711 오타맨 고창영 / 2.12
#include <stdio.h>
#include <string.h>

int main() {

	int n;
	scanf("%d", &n);

	char s[81] = { 0 };
	int miss, len;
	while (n--) {
		scanf("%d %s", &miss, s);
		len = strlen(s);
		for (int i = 0; i < len; i++) {
			if (i == miss - 1) continue;
			printf("%c", s[i]);
		}
		printf("\n");
	}

	return 0;
}