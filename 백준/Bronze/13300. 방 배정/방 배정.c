// 13300 방 배정 / 1.31
#include <stdio.h>

int main() {

	int n, k;
	scanf("%d %d", &n, &k);

	int stds[12] = { 0 }, s,cls,idx;
	while (n--) {
		idx = 0;
		scanf("%d %d", &s, &cls);
		if (s) idx++;
		idx += (cls - 1)*2;
		stds[idx]++;
	}

	int res_room = 0, room;
	float tmpRoom;
	for (int i = 0; i < 12; i++) {
		tmpRoom = (float)stds[i] / k;
		room = tmpRoom;
		if (room != tmpRoom) {
			room++;
		}
		res_room += room;
	}
	printf("%d", res_room);

	return 0;
}