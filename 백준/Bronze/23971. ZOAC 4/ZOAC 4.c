#include <stdio.h>

int main() {
    long long H, W, N, M;

    // 입력 받기
    scanf("%lld %lld %lld %lld", &H, &W, &N, &M);

    // 각 방향으로 가능한 자리 개수 계산
    long long rows = (H + N) / (N + 1); // 세로로 N칸 이상 비우는 행 개수
    long long cols = (W + M) / (M + 1); // 가로로 M칸 이상 비우는 열 개수

    // 총 수용 가능한 인원 계산
    long long max_people = rows * cols;

    // 결과 출력
    printf("%lld\n", max_people);

    return 0;
}
