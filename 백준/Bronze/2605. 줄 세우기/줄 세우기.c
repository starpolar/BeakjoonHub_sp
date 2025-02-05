// 2605 줄 세우기 / 2.5
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int stu[100] = { 0 };
	int num, swap, idx;
	for (int i = 0; i < n; i++) {
		stu[i] = i + 1;
		scanf("%d", &num);
		idx = i;
		for (int j = 0; j < num; j++) {
			swap = stu[idx - 1];
			stu[idx - 1] = stu[idx];
			stu[idx] = swap;
			idx--;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", stu[i]);
	}

	return 0;
}