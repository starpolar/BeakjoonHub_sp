// 스택, 큐, 덱 / 10.17
// 24511 queuestack
#include <stdio.h>
#define dequeMAX 200001
int main() {

	/*	x_0을
		1번 자료구조에 삽입한 뒤
		1번 자료구조에서 원소를 pop한다.그때 pop된 원소를
		x_1이라 한다. */
	// 1 2 3 4 가 자료구조가 아닌
	// 1이 하나의 자료구조 2가 하나의 자료구조 식으로 따로다.
	// 입력값 하나를 전체 자료구조에 모두 push pop 하고 난 다음 결과 출력

	int n;
	scanf("%d", &n);
	int aArr[100000] = { 0 };
	int aTmp, i, idx=0;
	for (i = 0; i < n; i++) {
		scanf("%d", &aTmp);
		if (!aTmp) {
			aArr[idx++] = i; //idx가 0의 갯수가 되며, 배열에 0의 위치를 저장.
		}
	}

	int deque[dequeMAX] = { 0 }, head= dequeMAX/2, tail=dequeMAX/2;

	int aValTmp = 0, setIdx ,curIdx=0;
	
	setIdx = aArr[curIdx];
	for (i = 0; i < n; i++) {
		scanf("%d", &aValTmp);
		if (idx == 0) {
			continue;
		}
		if (i == setIdx) {
			deque[tail++] = aValTmp;
			//printf("tail : %d\n", deque[tail - 1]);

			setIdx = aArr[++curIdx];

			/*aArr[curIdx++] = aValTmp;
			setIdx = aArr[curIdx];*/
		}
	}

	int m, c;
	scanf("%d", &m);

	for (i = 0; i < m; i++) {
		scanf("%d", &c);
		deque[--head] = c;
		printf("%d ", deque[--tail]);
	}

	//printf("tail : %d\n", deque[tail - 1]);



	//int pop=0;
	//while (m--) {
	//	scanf("%d", &c);
	//	pop = c;
	//	for (i = 0; i < idx; i++) { // 0의 갯수만큼 만 연산하고
	//		pop = aArr[i];
	//		aArr[i] = c;
	//		c = pop;
	//	}
	//	printf("[ ");
	//	for (i = 0; i < idx; i++) {
	//		printf("%d, ", aArr[i]);
	//	}
	//	printf(" ]");
	//	printf("%d ", pop);
	//}

	return 0;
}