// 18406 럭키 스트레이트 / 4.20
#include <stdio.h>
#include <string.h>

int main() {

	char n[9] = { 0 };
	scanf("%s", n);

	int nLen = strlen(n), l_idx=0, r_idx = 0, leftSum=0,rightSum=0;
	char f_half = 0, left[5] = { 0 }, right[5] = { 0 };
	for (int i = 0; i < nLen; i++) {
		if (nLen / 2 == i) f_half = 1;
		if (!f_half) {
			left[l_idx++] = n[i];
			leftSum += n[i] - '0';
		}
		else {
			right[r_idx++] = n[i];
			rightSum += n[i] - '0';
		}
	}

	printf("%s", leftSum == rightSum ? "LUCKY" : "READY");

	return 0;
}