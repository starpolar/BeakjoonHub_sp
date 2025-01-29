#include <stdio.h>
#include <ctype.h>

int main() {
    char str[102];  // 최대 길이가 1000이므로 충분한 크기로 선언

    while (fgets(str, sizeof(str), stdin)) {  // 입력이 존재할 때까지 반복
        int lower = 0, upper = 0, digit = 0, space = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (islower(str[i])) lower++;
            else if (isupper(str[i])) upper++;
            else if (isdigit(str[i])) digit++;
            else if (str[i] == ' ') space++;
        }

        printf("%d %d %d %d\n", lower, upper, digit, space);
    }

    return 0;
}
