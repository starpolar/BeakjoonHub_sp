// 3059 등장하지 않는 문자의 합 / 12.23
#include <stdio.h>
#include <string.h>

#define ALPHA ('Z'-'A'+1)

int main() {

	int t;
	char s[1001];
	scanf("%d", &t);
	while (t--) {
		int equal = ('Z' - 'A' + 1) * ('A' + 'Z') / 2;
		scanf("%s", s);
		int alphabet[ALPHA] = { 0 };

		for (int i = 0; i < strlen(s); i++) {
			int alpIdx = s[i] - 'A';
			alphabet[alpIdx]++;
		}

		for (int i = 0; i < ALPHA; i++) {
			if (alphabet[i]) equal -= 'A' + i;
		}

		printf("%d\n", equal);
	}

	return 0;
}