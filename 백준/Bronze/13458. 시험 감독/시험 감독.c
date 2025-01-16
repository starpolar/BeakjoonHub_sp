#include <stdio.h>

int main() {
    int N;  // 시험장의 개수
    scanf("%d", &N);
    
    int A[N];  // 각 시험장 응시자 수
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int B, C;  // 주 감독관이 감독할 수 있는 응시자 수 B, 부 감독관이 감독할 수 있는 응시자 수 C
    scanf("%d %d", &B, &C);
    
    long long totalSupervisors = 0;  // 필요한 감독관 총 수 (long long 사용 필요)
    
    for (int i = 0; i < N; i++) {
        // 주 감독관 한 명 배치
        totalSupervisors++;
        A[i] -= B;
        
        // 남은 인원이 있으면 부 감독관 배치
        if (A[i] > 0) {
            totalSupervisors += (A[i] + C - 1) / C;  // 올림 계산
        }
    }
    
    printf("%lld\n", totalSupervisors);  // 결과 출력
    
    return 0;
}
