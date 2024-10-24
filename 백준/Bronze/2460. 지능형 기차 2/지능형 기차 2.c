// 2460 지능형 기차 2 / 10.24
#include <stdio.h>
#define MAX 10000

int main() {

	int out, in, cur = 0, max = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &out, &in);
		cur -= out;
		if (cur < 0) {
			cur = 0;
		}
		cur += in;
		if (cur > MAX) {
			cur - MAX;
		}
		if (max < cur) {
			max = cur;
		}
	}
	printf("%d", max);

	return 0;
}