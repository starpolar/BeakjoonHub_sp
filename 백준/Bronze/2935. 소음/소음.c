// 2935 소음 / 11.19
#include <stdio.h>
#include <string.h>

int main() {

	char a[101], b[101], oper[5];
	scanf("%s %s %s", &a, &oper, &b);

	int sta = strlen(a) - 1;
	int stb = strlen(b) - 1;
	if (!(strcmp(oper, "*"))) {
		int zero = sta + stb;

		printf("1");
		for (int i = 0; i < zero; i++) {
			printf("0");
		}
	}
	else {
		char main[101], next[101];
		char* pa = a;
		if (strlen(a) == strlen(b)) {
			printf("2");
			pa++;
		}
		else {
			printf("1");
			pa++;
		}
		if (strlen(a) < strlen(b)) {
			char tmp[101];
			strcpy(tmp, a);
			strcpy(a, b);
			strcpy(b, tmp);
		}

		int pluLen = strlen(a) - strlen(b);
		for (int i = 1; i < strlen(a); i++) {
			if (i == pluLen) {
				printf("1");
				pa++;
				continue;
			}
			printf("%c", *pa++);
		}
	}

	return 0;
}