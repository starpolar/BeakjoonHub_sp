// 1076 저항 / 1.22
#include <stdio.h>
#include <string.h>

typedef struct {
    char color[10];
    int value;
    int multiplier;
} ResistorColor;

int main() {
    ResistorColor colors[] = {
        {"black", 0, 1},
        {"brown", 1, 10},
        {"red", 2, 100},
        {"orange", 3, 1000},
        {"yellow", 4, 10000},
        {"green", 5, 100000},
        {"blue", 6, 1000000},
        {"violet", 7, 10000000},
        {"grey", 8, 100000000},
        {"white", 9, 1000000000}
    };

    char color1[10], color2[10], color3[10];
    int value1, value2, multiplier;

    scanf("%s %s %s", color1, color2, color3);

    for (int i = 0; i < 10; i++) {
        /* 문자열은 주소값을 기반으로 비교하기에
        * 하나씩 문자 자체를 비교하는 strcmp를 사용해야함.
        * 문자 하나는 아스키코드로 값 자체를 비교함.
        */
        if (strcmp(colors[i].color, color1) == 0) {
            value1 = colors[i].value;
        }
        if (strcmp(colors[i].color, color2) == 0) {
            value2 = colors[i].value;
        }
        if (strcmp(colors[i].color, color3) == 0) {
            multiplier = colors[i].multiplier;
        }
    }

    long long resistance = (long long)(value1 * 10 + value2) * multiplier;
    printf("%lld\n", resistance);

    return 0;
}
