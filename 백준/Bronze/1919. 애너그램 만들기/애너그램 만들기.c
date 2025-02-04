// 1919 애너그램 만들기 / 2.4
#include <stdio.h>
#include <string.h>

int main() {

	char s1[1001] = { 0 }, s2[1001] = { 0 };
	scanf("%s %s", s1, s2);

	int s1Len = strlen(s1), s2Len = strlen(s2), total = s1Len + s2Len;
	for (int i = 0; i < s1Len; i++) {
		for (int j = 0; j < s2Len; j++) {
			if (s1[i] == s2[j]) {
				total-=2;
				s2[j] = '0';
				break;
			}
		}
	}
	printf("%d", total);

	return 0;
}