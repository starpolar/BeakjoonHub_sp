// 15829 Hashing / 1.17
#include <stdio.h>
#include <math.h>

#define llu unsigned long long

int main() {

	int l;
	scanf("%d", &l);
	//char s[l] = "";// 배열 크기를 변수로 받으면 초기화가 불가능
	char s[l]; 
	scanf("%s", s);

	llu sum = 0;
	for (int i = 0; i < l; i++) {
		sum += (s[i] - 'a' + 1) * pow(31, i);
	}
	printf("%llu", sum);

	return 0;
}