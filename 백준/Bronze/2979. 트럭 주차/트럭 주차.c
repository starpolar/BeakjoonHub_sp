#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int car1_s, car1_e, car2_s, car2_e, car3_s, car3_e;
    scanf("%d %d %d %d %d %d", &car1_s, &car1_e, &car2_s, &car2_e, &car3_s, &car3_e);

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        int carSum = 0;
        if (car1_s <= i && i < car1_e) carSum++;
        if (car2_s <= i && i < car2_e) carSum++;
        if (car3_s <= i && i < car3_e) carSum++;

        if (carSum == 1) sum += a;
        else if (carSum == 2) sum += b * 2;
        else if (carSum == 3) sum += c * 3;
    }

    printf("%d\n", sum);  // 개행 추가
    return 0;
}
