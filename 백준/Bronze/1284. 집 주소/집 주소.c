// 1284 집 주소 / 12.3
#include <stdio.h>

int main() {

	char n[5] = { 0 };
	while (1) {
		scanf("%s", n);
		if (n[0] == '0') break;
		char* pn = n;
		int sum = 1;
		while (*pn) {
			if (*pn == '1') sum += 2;
			else if (*pn == '0') sum += 4;
			else sum += 3;
			sum++;
			pn++;
		}
		printf("%d\n", sum);
		
	}

	return 0;
}