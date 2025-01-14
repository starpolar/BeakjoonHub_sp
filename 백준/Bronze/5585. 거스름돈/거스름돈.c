// 5585 거스름돈 / 1.14
#include <stdio.h>

int main() {

	int price;
	scanf("%d", &price);

	price = 1000 - price;
	int changeCnt = 0;
	while (1) {
		if (price >= 500) {
			price -= 500;
			changeCnt++;
		}
		else if (price >= 100) {
			price -= 100;
			changeCnt++;
		}
		else if (price >= 50) {
			price -= 50;
			changeCnt++;
		}
		else if (price >= 10) {
			price -= 10;
			changeCnt++;
		}
		else if (price >= 5) {
			price -= 5;
			changeCnt++;
		}
		else if (price >= 1) {
			price -= 1;
			changeCnt++;
		}
		
		if (price <= 0) {
			printf("%d", changeCnt);
			break;
		}
	}

	return 0;
}