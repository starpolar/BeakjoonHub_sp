// 1547 공 / 11.19
#include <stdio.h>

int main() {

	int m;
	scanf("%d", &m);

	int x, y, tmp;
	int ball[4] = { 0 };
	ball[1] = 1;
	while (m--) {
		scanf("%d %d", &x, &y);
		if (x == y) continue;
		tmp = ball[x];
		ball[x] = ball[y];
		ball[y] = tmp;
	}

	for (int i = 0; i < 4; i++) {
		if (ball[i]) {
			if (i == 0) {
				printf("-1");
				break;
			}
			printf("%d", i);
		}
	}

	return 0;
}