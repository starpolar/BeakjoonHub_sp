// 10162 전자레인지 / 11.11
#include <stdio.h>

int main() {

	int t, a = 0, b = 0, c = 0;
	scanf("%d", &t);

	int tmp = t / 300;
	a = tmp;
	int rest = t - (a * 300);

	tmp = rest / 60;
	b = tmp;
	rest -= (b * 60);

	tmp = rest / 10;
	c = tmp;
	rest -= (c * 10);

	if (rest != 0) {
		printf("-1");
	}
	else {
		printf("%d %d %d", a, b, c);
	}

	return 0;
}