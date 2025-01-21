#include <stdio.h>
#include <string.h>

int main() {
    char octal[333335] = {0};       // 8진수 입력
    char octSum[1000000] = {0};    // 변환된 2진수 저장
    scanf("%s", octal);

    int octLen = strlen(octal);    // 8진수 길이 확인

    // 입력이 "0"인 경우
    if (octal[0] == '0' && octLen == 1) {
        printf("0");
        return 0;
    }

    // 8진수 -> 2진수 변환
    int octTmp, binaryPow = 4;
    char* p_octSum = octSum;

    for (int i = 0; i < octLen; i++) {
        octTmp = octal[i] - '0'; // 8진수 숫자를 정수로 변환
        for (int j = 0; j < 3; j++) {
            if (octTmp >= binaryPow) {
                octTmp -= binaryPow;
                *p_octSum = '1';
            } else {
                *p_octSum = '0';
            }
            binaryPow /= 2;
            p_octSum++;
        }
        binaryPow = 4; // 다음 숫자를 처리하기 위해 초기화
    }
    *p_octSum = '\0'; // 널 종료 추가

    // 앞쪽 0 제거
    p_octSum = octSum; // 포인터 초기화
    while (*p_octSum == '0') {
        p_octSum++; // 앞쪽 0을 건너뜀
    }

    // 결과 출력
    printf("%s\n", p_octSum);

    return 0;
}
