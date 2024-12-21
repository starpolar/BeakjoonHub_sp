// 2959 거북이 / 12.21
#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

// 비교 함수: 오름차순 정렬
int compare_ints(const void* a, const void* b) {
	int int_a = *(int*)a;
	int int_b = *(int*)b;
	return (int_a > int_b) - (int_a < int_b); // 또는: return int_a - int_b;
}

int main() {

	// 부등변 사각형이 아니라 최대 직사각형만 만들고 남은 선분은 버림.

	/*
	퀵솔트는 리스트중에 첫 인덱스를 피벗(중심)으로 잡고 각 양쪽에 포인터를 두어서(low, high)
	두개 포인터의 크기를 비교해 교환하며 포인터의 위치를 좁혀 나간다.
	종단에 양쪽 포인터가 겹쳤을때 교환을 종료하고 high 포인터가 한칸 내려와서
	피벗보다 작은 값과 피벗을 교환한다.다시 피벗의 양쪽으로 리스트를 분할 해서 반복한다.
	종료 시점은 리스트에 값이 1개 이거나 없을 때까지 트리 구조로 파생해서 반복 한다.
	그래서 시간복잡도가 최악의 경우(이미 정렬된 리스트)엔 n ^ 2로 여타 정렬 알고리즘들과 같고
	최선과 평균의 경우엔 n * log2 n 으로 다른 정렬 알고리즘보다 빠르다.
	(log2 n)은 횟수를 의미하고(n*)은 데이터의 갯수를 의미한다.
	*/

	int x, arr[SIZE];
	for (int i = 0; i < 4; i++) {
		scanf("%d", &x);
		arr[i] = x;
	}

	qsort(arr,SIZE,sizeof(int), compare_ints);

	printf("%d", arr[0] * arr[2]);

	return 0;
}