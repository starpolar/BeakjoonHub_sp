// 1225 이상한 곱셈 / 2.11
#include <stdio.h>
#include <string.h>

#define MAX 10001

int main() {

	char a[MAX] = { 0 }, b[MAX] = { 0 };
	scanf("%s", a);
	if (a[0] == '0') {
		printf("0");
		return 0;
	}
	scanf("%s", b);

	int aLen = strlen(a), bLen = strlen(b);
	unsigned long long sum = 0;
	for (int i = 0; i < aLen; i++) {
		for (int j = 0; j < bLen; j++) {
			sum += (a[i]-'0') * (b[j]-'0');
		}
	}

	printf("%llu", sum);

	return 0;
}