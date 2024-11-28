// 10214 Baseball / 11.28
#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);

	int y, k, ysum, ksum;
	while (t--) {
		ysum = 0;
		ksum = 0;
		for (int i = 0; i < 9; i++) {
			scanf("%d %d", &y, &k);
			ysum += y;
			ksum += k;
		}
		if (ysum > ksum) printf("Yonsei\n");
		else if (ysum < ksum) printf("Korea\n");
		else printf("Draw\n");
	}

	return 0;
}