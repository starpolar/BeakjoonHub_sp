// 11006 남욱이의 닭장 / 12.31
#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);

	int totalLeg, chicken, oneLeg;
	while (t--) {
		scanf("%d %d", &totalLeg, &chicken);
		oneLeg = chicken * 2 - totalLeg;
		printf("%d %d\n", oneLeg, chicken - oneLeg);
	}

	return 0;
}