// 10820 문자열 분석 / 1.29
#include <stdio.h>
#include <string.h>

int main() {
	char s[102] = { 0 };
	while (1) {
		if (fgets(s, sizeof(s), stdin) == NULL) {
			return 0;
		}
		s[strlen(s)-1] = '\0';
		int num = 0, sp = 0, small = 0, capital = 0;
		for (int i = 0; i < strlen(s); i++) {
			if ((int)s[i] == 32) {
				sp++;
			} 
			else if ((int)s[i] <= 57) {
				num++;
			}
			else if ((int)s[i] <= 90) {
				capital++;
			}
			else if ((int)s[i] <= 122) {
				small++;
			}
		}
		printf("%d %d %d %d\n", small, capital, num, sp);
	}

	return 0;
}