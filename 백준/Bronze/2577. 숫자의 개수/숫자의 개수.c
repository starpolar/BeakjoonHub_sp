// 2577 숫자의 개수 / 1.7
#include <stdio.h>
#include <string.h>

int main() {

	int numArr[10] = { 0 };

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a * b * c;
	char buf[20];
	sprintf(buf, "%d", sum);

	for (int i = 0; i < strlen(buf); i++) {
		numArr[buf[i] - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", numArr[i]);
	}

	return 0;
}