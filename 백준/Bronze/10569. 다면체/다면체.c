// 10569 다면체 / 12.5
#include <stdio.h>

int main() {

	// 모서리는 다면체의 변을 의미함.

	// 꼭 - 모 - 2 = -면
	// : 모 + 2 - 꼭 = 면

	int t;
	scanf("%d", &t);

	int v, e;
	while (t--) {
		scanf("%d %d", &v, &e);
		printf("%d\n", e + 2 - v);
	}


	return 0;
}