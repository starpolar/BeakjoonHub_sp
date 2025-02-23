// 11098 첼시를 도와줘!/ 2.23
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int p;
	while (n--) {
		scanf("%d", &p);

		int pay, max=0;
		char name[21], maxName[21];
		while (p--) {
			scanf("%d %s", &pay, name);
			if (pay > max) {
				max = pay;
				for (int i = 0; i < 21; i++) {
					maxName[i] = name[i];
					if (name[i] == "/0") break;
				}
			}
		}

		printf("%s\n", maxName);
	}

	return 0;
}