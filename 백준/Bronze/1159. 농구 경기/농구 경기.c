// 1159 농구 경기 / 1.28
#include <stdio.h>

#define ALPHALEN 26

int main() {

	int n;
	scanf("%d", &n);

	char s[31] = { 0 }, alpha[ALPHALEN] = { 0 };
	while (n--) {
		scanf("%s", s);
		alpha[s[0] - 'a']++;
	}

	char isNotExist = 1;
	for (int i = 0; i < ALPHALEN; i++) {
		if (alpha[i] >= 5) {
			printf("%c", i + 'a');
			isNotExist = 0;
		}
	}
	if (isNotExist) printf("PREDAJA");

	return 0;
}