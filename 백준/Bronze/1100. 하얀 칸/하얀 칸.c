// 1100 하얀 칸 / 1.18
#include <stdio.h>

int main() {

	int white_horse = 0, f_first_black_space=0;
	char chess[9] = { 0 };
	for (int i = 0; i < 8; i++) {
		scanf("%s", chess);
		if (i % 2 == 1) {
			f_first_black_space = 1;
		}
		for (int j = 0, idx=0; idx < 8; j++, idx++) {
			if (f_first_black_space) {
				j++;
				f_first_black_space = 0;
			}
			if (j % 2 == 0 && chess[idx] == 'F') {
				white_horse++;
			}
		}
	}
	printf("%d", white_horse);

	return 0;
}