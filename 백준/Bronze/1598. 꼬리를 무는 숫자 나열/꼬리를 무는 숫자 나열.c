// 1598 꼬리를 무는 숫자 나열 / 12.18
#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, y;
	scanf("%d %d", &x, &y);
	if (x > y) {
		int tmp = y;
		y = x;
		x = tmp;
	}

	int xx = x / 4;
	if (!(x % 4 == 0)) xx++;
	int yx = y / 4;
	if (!(y % 4 == 0)) yx++;
	int range = yx - xx;

	int xy = x - ((xx - 1) * 4);
	int yy = y - ((yx - 1) * 4);
	int yrange = xy - yy;
	if (yrange < 0) yrange = -yrange;
	range += yrange;

	printf("%d", range);

	return 0;
}