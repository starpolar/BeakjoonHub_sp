#include <stdio.h>

int main() {
    int T; // 테스트 케이스의 수
    scanf("%d", &T);

    while (T--) {
        int C, V; // C: 사탕의 개수, V: 아이들의 수
        scanf("%d %d", &C, &V);

        int quotient = C / V; // 각 아이에게 나눠줄 사탕의 개수
        int remainder = C % V; // 남는 사탕의 개수

        printf("You get %d piece(s) and your dad gets %d piece(s).\n", quotient, remainder);
    }

    return 0;
}
