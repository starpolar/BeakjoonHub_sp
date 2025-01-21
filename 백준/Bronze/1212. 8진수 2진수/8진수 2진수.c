// 1212 8진수 2진수 / 1.21
#include <stdio.h>
#include <string.h>

int main() {

	char octal[333335] = { 0 };
	scanf("%s", octal);

	int octLen = strlen(octal);
	if (octal[0] == '0' && octLen == 1) {
		printf("0");
		return 0;
	}

	int octTmp, binaryPow = 4;
	char octSum[1000000] = { 0 };
	char* p_octSum = octSum;
	for (int i = 0; i < octLen; i++) {
		octTmp = octal[i] - '0';
		for (int j = 0; j < 3; j++) {
			if (octTmp >= binaryPow) {
				octTmp -= binaryPow;
				*p_octSum = '1';
			}
			else {
				*p_octSum = '0';
			}
			binaryPow /= 2;
			p_octSum++;
		}
		binaryPow = 4;
	}
	*p_octSum = '\0';

	p_octSum = octSum;
	while (*p_octSum == '0') {
		p_octSum++;
	}

	printf("%s", p_octSum);

	return 0;
}