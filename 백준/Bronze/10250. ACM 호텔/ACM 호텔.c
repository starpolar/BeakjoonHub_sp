// 10250 ACM 호텔 / 10.27
#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);

	int h, w, n;
	while (t--) {
		scanf("%d %d %d", &h, &w, &n);
		int curh = 0, curw = 1;
		while (n--) {
			curh++;
			if (curh > h) {
				curh = 1;
				curw++;
			}
		}
		if (curw < 10) {
			printf("%d0%d\n", curh, curw);
		}
		else {
			printf("%d%d\n", curh, curw);
		}
	}

	return 0;
}