// 3034 앵그리 창영 / 12.14
#include <stdio.h>
#include <math.h>

int main() {

	int n, w, h;
	scanf("%d %d %d", &n, &w, &h);

	int diagonal=sqrt((w*w)+(h*h)), x;
	while (n--) {
		scanf("%d", &x);
		if (x <= diagonal) printf("DA\n");
		else printf("NE\n");
	}

	return 0;
}