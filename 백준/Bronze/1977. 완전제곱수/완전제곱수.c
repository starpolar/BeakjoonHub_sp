// 1977 완전제곱수 / 1.20
#include <stdio.h>
#include <math.h>

int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	int num=1, pow, sum = 0, min = 10001;
	if (m != 1) num = (int)sqrt(m) + 1;
	while (1) {
		pow = num * num;
		if (n < pow) break;
		else {
			sum += pow;
			if (min > pow) min = pow;
		}
		num++;
	}

	if (sum == 0) printf("-1");
	else printf("%d\n%d", sum, min);

	return 0;
}