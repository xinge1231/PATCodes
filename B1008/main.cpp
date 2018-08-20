/*
	B1008:数组循环右移
	思路：使用了辅助数组。 //不用辅助，移动次数最少的方法见实战5.2
*/

#include <cstdio>

const int MAXN = 110;
int num[MAXN];
int tmp[MAXN];
int main() {
	int N, M;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", num + i);
	}

	for (int i = 0; i < N; i++) {
		tmp[(i + M) % N] = num[i];
	}

	for (int i = 0; i < N; i++) {
		if (i)
			printf(" %d", tmp[i]);
		else
			printf("%d", tmp[i]);
	}
}