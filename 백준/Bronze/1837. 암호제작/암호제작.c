#include <stdio.h>
#include <string.h>

#define ERA_MAX 1000000

void era_prime_init(int *isNotPrime) {
    isNotPrime[0] = isNotPrime[1] = 1;
    for (int i = 2; i * i <= ERA_MAX; i++) {
        if (!isNotPrime[i]) {
            for (int j = i * i; j <= ERA_MAX; j += i) {
                isNotPrime[j] = 1;
            }
        }
    }
}

int main() {
    int isNotPrime[ERA_MAX + 1] = {0};
    era_prime_init(isNotPrime);

    char P[105] = {0};
    int k = 0;
    scanf("%s %d", P, &k);

    // 문자열 P를 숫자로 변환하며 나머지를 계산
    for (int i = 2; i < k; i++) {
        if (!isNotPrime[i]) {
            unsigned long long mod = 0;
            for (int j = 0; P[j] != '\0'; j++) {
                mod = (mod * 10 + (P[j] - '0')) % i;
            }
            if (mod == 0) {
                printf("BAD %d\n", i);
                return 0;
            }
        }
    }

    printf("GOOD\n");
    return 0;
}
