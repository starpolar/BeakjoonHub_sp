// 2864 5와 6의 차이 / 2.1
#include <stdio.h>
#include <string.h>

int main() {

	char a[8]={0}, b[8] = { 0 };
	scanf("%s %s", &a, &b);

	char amin[8] = { 0 }, amax[8] = { 0 }, bmin[8] = { 0 }, bmax[8] = { 0 };
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == '5' || a[i]=='6') {
			amin[i] = '5';
			amax[i] = '6';
		}
		else {
			amin[i] = a[i];
			amax[i] = a[i];
		}
	}

	for (int i = 0; i < strlen(b); i++) {
		if (b[i] == '5' || b[i] == '6') {
			bmin[i] = '5';
			bmax[i] = '6';
		}
		else {
			bmin[i] = b[i];
			bmax[i] = b[i];
		}
	}

	int amintoi, amaxtoi, bmintoi, bmaxtoi;
	sscanf(amin, "%d", &amintoi);
	sscanf(amax, "%d", &amaxtoi);
	sscanf(bmin, "%d", &bmintoi);
	sscanf(bmax, "%d", &bmaxtoi);
	printf("%d %d", amintoi + bmintoi, amaxtoi + bmaxtoi);

	return 0;
}