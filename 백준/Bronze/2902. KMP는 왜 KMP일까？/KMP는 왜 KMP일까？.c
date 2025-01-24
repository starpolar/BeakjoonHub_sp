// 2902 KMP는 왜 KMP일까 ? / 1.24
#include <stdio.h>
#include <string.h>

int main() {

	char s[101] = { 0 };
	scanf("%s", s);
	char f_first = 1;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == '-') f_first = 1;
		else if (f_first) {
			printf("%c", s[i]);
			f_first = 0;
		}
	}

	return 0;
}