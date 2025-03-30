#include <stdio.h>

int main() {
    int h1, m1, s1;  // 현재 시간
    int h2, m2, s2;  // 도착 시간
    int start, end, diff;
    
    // 입력 받기
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    
    // 초 단위로 변환
    start = h1 * 3600 + m1 * 60 + s1;
    end = h2 * 3600 + m2 * 60 + s2;

    // 만약 도착 시간이 현재 시간보다 작다면, 다음날로 계산
    if (end < start) {
        end += 24 * 3600;  // 24시간 추가
    }

    // 차이 계산
    diff = end - start;

    // 시, 분, 초로 변환
    int h = diff / 3600;
    int m = (diff % 3600) / 60;
    int s = diff % 60;

    // 출력 (00:00:00 형식 유지)
    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}
