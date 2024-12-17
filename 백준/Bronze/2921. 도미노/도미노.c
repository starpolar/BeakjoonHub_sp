// 2921 도미노 / 12.17
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int sum=0;
	for (int i = 1; i <= n; i++) {
		int ap = i * (i + 1) / 2; //arithmetic progression
		sum += ap + (i * (i + 1));
	}

	printf("%d", sum);

	return 0;
}