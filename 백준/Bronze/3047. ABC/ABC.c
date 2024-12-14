// 3047 ABC / 12.14
#include <stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int A=a, B=0, C=a;
	if (b < A) {
		A=b;
		if (c < A) A=c;
	}
	else if (c < A) {
		A=c;
		if (b < A) A=b;
	}

	if (b > C) {
		C=b;
		if (c > C) C=c;
	}
	else if (c > C) {
		C=c;
		if (b > C) C=b;
	}

	int num[3] = { a,b,c };
	for (int i = 0; i < 3; i++) {
		if (num[i] != A && num[i] != C) B = num[i];
	}

	char seq[5];
	scanf("%s",seq);
	for (int i = 0; i < 3; i++) {
		if (seq[i] == 'A') printf("%d ", A);
		else if (seq[i] == 'B') printf("%d ", B);
		else if (seq[i] == 'C') printf("%d ", C);
	}

	return 0;
}