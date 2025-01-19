// 1550 16진수 / 1.19
#include <stdio.h>
#include <string.h>

int main() {

	char s[7] = "";
	scanf("%s", s);

	int num=0, pow=1;
	for (int i = strlen(s)-1; i >= 0; i--) {
		if (s[i] < 'A') {
			num += (s[i] - '0')*pow;
		}
		else {
			num += (s[i] - ('A' - 10)) *pow;
		}
		pow *= 16;
	}
	printf("%d", num);

	
	return 0;
}