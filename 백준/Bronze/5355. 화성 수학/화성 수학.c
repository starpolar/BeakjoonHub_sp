// 5355 화성 수학 / 2.2
#include <stdio.h>
#include <string.h>

int main() {

	int t;
	scanf("%d", &t);

	char buf[10] = { 0 };
	float num;
	while (t--) {
		scanf("%f", &num);
		fgets(buf, sizeof(buf), stdin);
		for (int i = 0; i < strlen(buf); i++) {
			if (buf[i] == '@') {
				num *= 3;
			}
			else if (buf[i] == '%') {
				num += 5;
			}
			else if (buf[i] == '#') {
				num -= 7;
			}
		}
		printf("%.2f\n", num);
	}

	return 0;
}