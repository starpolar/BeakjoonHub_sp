#include <stdio.h>

int main() {
    int nArr[9];
    int sum = 0;

    // 입력 받기 및 전체 합 계산
    for (int i = 0; i < 9; i++) {
        scanf("%d", &nArr[i]);
        sum += nArr[i];  // 전체 합 계산
    }

    // 두 난쟁이 찾기
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - (nArr[i] + nArr[j]) == 100) {  // 두 명을 제외한 합이 100이면
                // 두 난쟁이를 제외하고 출력
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        printf("%d\n", nArr[k]);
                    }
                }
                return 0;  // 정답을 찾으면 종료
            }
        }
    }
    return 0;
}
