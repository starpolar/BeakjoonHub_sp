// 10984 내 학점을 구해줘 / 12.10
#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);

	int n;
	while (t--) {
		scanf("%d", &n);

		int c, grade = 0, avgSize=n;
		double g, gpa = 0;
		while (n--) {
			scanf("%d %lf", &c, &g);
			grade += c;
			gpa += c*g;
		}

		printf("%d %.1lf\n", grade, gpa / grade);
	}

	return 0;
}