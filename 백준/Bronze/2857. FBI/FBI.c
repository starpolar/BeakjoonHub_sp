// 2857 FBI / 12.12
#include <stdio.h>
#include <string.h>

int main() {

	int t = 1, fbi=0;
	char x[15] = { 0 };
	while (t < 6) {
		scanf("%s", x);
		for (int i = 0; i < strlen(x); i++) {
			if (x[i] == 'F') {
				if (x[i + 1] == 'B') {
					if (x[i + 2] == 'I') {
						printf("%d ", t);
						fbi++;
						break;
					}
				}
			}
		}
		t++;
	}
	if (!fbi) printf("HE GOT AWAY!");

	return 0;
}