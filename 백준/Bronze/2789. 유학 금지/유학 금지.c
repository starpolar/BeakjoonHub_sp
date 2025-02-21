// 2789 유학 금지 / 2.21
#include <stdio.h>
#include <string.h>

int main() {

	char confirm[10] = "CAMBRIDGE", s[101] = { 0 };
	scanf("%s", s);

	int sLen = strlen(s), conLen = strlen(confirm);
	char isCon = 0;
	for (int i = 0; i < sLen; i++) {
		isCon = 0;
		for (int j = 0; j < conLen; j++) {
			if (s[i] == confirm[j]) {
				isCon = 1;
				break;
			}
		}
		if (!isCon) printf("%c", s[i]);
	}

	return 0;
}