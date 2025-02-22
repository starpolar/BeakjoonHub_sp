// 10812 바구니 순서 바꾸기 / 2.22
#include <stdio.h>

int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int res[101] = { 0 };
	for (int num = 1; num <= n; num++) {
		res[num] = num;
	}

	int i, j, k, tmp[101] = { 0 }, idx, r;
	while (m--) {
		scanf("%d %d %d", &i, &j, &k);
		
		idx = 0;
		for (r = k; r <= j; r++) {
			tmp[idx++] = res[r];
		}
		for (r = i; r < k; r++) {
			tmp[idx++] = res[r];
		}
		idx = 0;
		for (r = i; r <= j; r++) {
			res[r] = tmp[idx++];
		}
	}

	for (i = 1; i <= n; i++) {
		printf("%d ", res[i]);
	}

	return 0;
}