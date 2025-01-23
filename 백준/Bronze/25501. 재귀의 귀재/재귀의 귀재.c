// 25501 재귀의 귀재 / 1.23
#include <stdio.h>
#include <string.h>

int cnt = 0;

int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    int t;
    scanf("%d", &t);

    char s[1001] = "";
    int isPalin;
    while (t--) {
        cnt = 0;
        scanf("%s", s);
        isPalin = isPalindrome(s);
        printf("%d %d\n", isPalin, cnt);
    }
}