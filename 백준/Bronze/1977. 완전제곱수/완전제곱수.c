// 1977 완전제곱수 / 1.20
#include <stdio.h>

int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	int num=1,pow,sum=0, min=10001;
	while (1) {
		pow = num * num;
        num++;
		if (pow < m) continue;
		if (n < pow) break;
		else {
			sum += pow;
			if (min > pow) min = pow;
		}
	}

	if (sum == 0) printf("-1");
	else printf("%d\n%d", sum, min);

	return 0;
}