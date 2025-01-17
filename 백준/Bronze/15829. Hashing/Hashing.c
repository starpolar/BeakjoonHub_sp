#include <stdio.h>
#include <string.h>

#define R 31
#define M 1234567891

int main() {
    int n;
    char str[51];
    scanf("%d", &n);
    scanf("%s", str);

    unsigned long long hash = 0;
    unsigned long long power = 1; // r^i 값을 저장

    for (int i = 0; i < n; i++) {
        int value = str[i] - 'a' + 1;
        hash = (hash + value * power) % M;
        power = (power * R) % M; // 여기에서 오버플로우 방지
    }

    printf("%llu\n", hash);
    return 0;
}
