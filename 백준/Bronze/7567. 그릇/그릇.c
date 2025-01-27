// 7567 그릇 / 1.27
#include <stdio.h>
#include <string.h>

int main() {

	char s[51] = { 0 };
	scanf("%s", s);

	int sum = 10;
	for (int i = 1; i < strlen(s); i++) {
		if (s[i] == s[i - 1]) sum += 5;
		else sum += 10;
	}

	printf("%d", sum);

	return 0;
}