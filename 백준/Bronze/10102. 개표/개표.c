// 10102 개표 / 11.27
#include <stdio.h>

int main() {

	int v;
	char vote[16];
	scanf("%d %s", &v, vote);

	int idx = 0, a=0, b=0;
	for (int i = 0; i < v; i++) {
		if (vote[idx++] == 'A') a++;
		else b++;
	}
	if (a > b) printf("A");
	else if (a < b) printf("B");
	else printf("Tie");

	return 0;
}