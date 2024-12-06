// 4458 첫 글자를 대문자로 / 12.6
#include <stdio.h>

int main() {

	int n;
	scanf("%d\n", &n);
	
	char str[31] = { 0 };
	while (n--) {
		gets(str);
		char* pstr = str;
		if (!('A' <= pstr[0] && pstr[0] <= 'Z')) {
			pstr[0] -= ' ';
			printf("%c", pstr[0]);
		}
		else printf("%c", pstr[0]);
		printf("%s\n", ++pstr);
	}

	return 0;
}