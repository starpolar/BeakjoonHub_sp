// 6359 만취한 상범 / 2.19
#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);

	int n;
	while (t--) {
		scanf("%d", &n);
		char nArr[101] = { 0 };

		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j +=i) {
				if (nArr[j] == 0) {
					nArr[j] = 1;
				}
				else {
					nArr[j] = 0;
				}
			}
		}

		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (nArr[i] == 1) cnt++;
		}

		printf("%d\n", cnt);
	}

	return 0;
}