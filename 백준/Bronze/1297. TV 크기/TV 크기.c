// 1297 TV 크기 / 2.6
#include <stdio.h>
#include <math.h>

int main() {

	int d, h, w;
	scanf("%d %d %d", &d, &h, &w);

	double k = d / sqrt(h * h + w * w);
	h = k * h;
	w = k * w;
	printf("%d %d", h, w);

	return 0;
}