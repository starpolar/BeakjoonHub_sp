// 10821 정수의 개수 / 3.23
#include <stdio.h>
#include <string.h>

int main() {

	char s[101];
	scanf("%s", s);

	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ',') {
			cnt++;
		}
	}

	printf("%d", ++cnt);

	return 0;
}