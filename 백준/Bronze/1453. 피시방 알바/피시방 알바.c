// 1453 피시방 알바 / 2.7
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	char compu[101] = { 0 };
	int guest, cnt = 0;
	while (n--) {
		scanf("%d", &guest);
		if (compu[guest] == 1) cnt++;
		compu[guest] = 1;
	}
	printf("%d", cnt);

	return 0;
}