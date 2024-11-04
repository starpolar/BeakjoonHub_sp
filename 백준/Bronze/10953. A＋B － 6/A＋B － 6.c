// 10953 A + B - 6 / 11.4
#include <stdio.h>

int sum(char * a, char * b) {
	int anum = a - '0';
	int bnum = b - '0';
	int c = anum + bnum;
	return c;
}

int main() {

	int n;
	scanf("%d ", &n);

	char buf[10] = "";
	while (n--) {
		gets(buf);
		printf("%d\n", sum(buf[0], buf[2]));
	}

	return 0;
}