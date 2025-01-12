// 2920 음계 / 1.12
#include <stdio.h>

int main() {

	int num;
	scanf("%d", &num);
	int start, firstFlag;
	if (num == 1) {
		start = 1;
		firstFlag = 1;
	}
	else if (num == 8) {
		start = 8;
		firstFlag = 0;
	}
	else { 
		printf("mixed");
		return 0;
	}


	for (int i = 1; i <= 7; i++) {
		if (firstFlag) start++;
		else start--;
		scanf("%d", &num);

		if (start != num) {
			printf("mixed");
			return 0;
		}
	}
	if (firstFlag) printf("ascending");
	else printf("descending");

	return 0;
}