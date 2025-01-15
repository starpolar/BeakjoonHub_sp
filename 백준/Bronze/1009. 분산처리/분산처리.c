#include <stdio.h>

int main() {
    int t; // 테스트 케이스 개수
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        // 1~10까지의 마지막 자리의 주기를 저장
        int last_digit = a % 10;
        int cycle[4];
        cycle[0] = last_digit;
        for (int i = 1; i < 4; i++) {
            cycle[i] = (cycle[i - 1] * last_digit) % 10;
        }

        // b가 0일 경우 처리
        if (b == 0) {
            printf("1\n");
            continue;
        }

        // 주기의 길이는 최대 4
        int cycle_length = (b - 1) % 4; // 0-indexed
        int result = cycle[cycle_length];

        // 결과 출력 (결과가 0일 경우 10으로 출력)
        printf("%d\n", result == 0 ? 10 : result);
    }

    return 0;
}
