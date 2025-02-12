#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int car1_s, car1_e, car2_s, car2_e, car3_s, car3_e;
    scanf("%d %d %d %d %d %d", &car1_s, &car1_e, &car2_s, &car2_e, &car3_s, &car3_e);

    int parking[101] = {0}; // 1~100까지 주차 공간을 체크
    
    // 각 차량이 주차하는 구간을 1씩 증가
    for (int i = car1_s; i < car1_e; i++) parking[i]++;
    for (int i = car2_s; i < car2_e; i++) parking[i]++;
    for (int i = car3_s; i < car3_e; i++) parking[i]++;

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (parking[i] == 1) sum += a * 1;
        else if (parking[i] == 2) sum += b * 2;
        else if (parking[i] == 3) sum += c * 3;
    }

    printf("%d\n", sum);
    return 0;
}
