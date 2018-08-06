//B1032：挖掘机技术哪家强

#include <cstdio>

const int MAXN = 100000;;
int total_score[MAXN] = { 0 };
int main() {
	int n;
	int max_index = 0;
	scanf("%d", &n);
	while (n--) {
		int school, score;
		scanf("%d%d", &school, &score);
		total_score[school] += score;
		if (total_score[school] > total_score[max_index]) {
			max_index = school;
		}
	}
	printf("%d %d\n", max_index, total_score[max_index]);
	
}