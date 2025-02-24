// 5576 콘테스트 / 2.24
#include <stdio.h>

int main() {

	int w[10], k[10], tmp;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &tmp);
		w[i] = tmp;
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &tmp);
		k[i] = tmp;
	}

	int wsum=0, ksum=0, wmax, kmax, maxIdx;
	for (int _ = 1; _ <= 3; _++) {
		wmax = 0;
		kmax = 0;
		for (int i = 0; i < 10; i++) {
			if (wmax < w[i]) {
				wmax = w[i];
				maxIdx = i;
			}
		}
		wsum += wmax;
		w[maxIdx] = 0;

		for (int i = 0; i < 10; i++) {
			if (kmax < k[i]) {
				kmax = k[i];
				maxIdx = i;
			}
		}
		ksum += kmax;
		k[maxIdx] = 0;
	}

	printf("%d %d", wsum, ksum);

	return 0;
}