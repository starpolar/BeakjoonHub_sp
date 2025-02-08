// 2592 대표값 / 2.8
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// 오름차순 정렬
int compare_ints(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {

	int num[SIZE] = { 0 }, tmp;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &tmp);
		num[i] = tmp;
	}

	qsort(num, SIZE, sizeof(int), compare_ints);

	int sum = 0, manyCnt = 0, tmpCnt=1, manyNum=0;
	for (int i = 0; i < 10; i++) {
		sum += num[i];
		if (i == 0) continue;		
		if (num[i - 1] == num[i]) tmpCnt++;
		else if (manyCnt < tmpCnt) {
			manyNum = num[i - 1];
			manyCnt = tmpCnt;
			tmpCnt = 0;
		}
	}

	printf("%d %d", sum/SIZE, manyNum);

	return 0;
}