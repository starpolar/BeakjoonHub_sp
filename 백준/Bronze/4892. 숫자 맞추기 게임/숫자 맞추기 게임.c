// 4892 숫자 맞추기 게임 / 12.3
#include <stdio.h>

int main() {

	int idx=0, n0,n1,n2,n3,n4;
	while (1) {
		scanf("%d", &n0);
		if (!n0) break;

		n1 = 3 * n0;
		int isEven = 0;
		if (!(n1 % 2)) {
			n2 = n1 / 2;
			isEven = 1;
		}
		else n2 = (n1 + 1) / 2;
		n3 = 3 * n2;
		n4 = n3 / 9;

		printf("%d. %s %d\n", ++idx, isEven ? "even" : "odd", n4);
	}

	return 0;
}