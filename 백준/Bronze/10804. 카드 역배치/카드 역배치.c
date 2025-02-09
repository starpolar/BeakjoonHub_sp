#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int cards[21];  // 1~20번 카드 (0번 인덱스는 사용 안 함)
    
    // 초기화: 1부터 20까지 채우기
    for (int i = 1; i <= 20; i++) {
        cards[i] = i;
    }

    // 입력받고 구간 뒤집기
    for (int i = 0; i < 10; i++) {
        int start, end;
        scanf("%d %d", &start, &end);
        reverse(cards, start, end);
    }

    // 결과 출력
    for (int i = 1; i <= 20; i++) {
        printf("%d ", cards[i]);
    }

    return 0;
}
