//B1036:和奥巴马一起编程

#include <cstdio>
#include <cstring>

char figure[20][20] = { 0 };
int main() {
	int N;
	char C;
	scanf("%d %c", &N, &C);
	int rows = N % 2 ? N / 2 + 1 : N / 2;
	memset(figure, C, N);
	memset(figure + rows - 1, C, N);
	
	for (int i = 1; i < rows-1; i++) {
		for (int j = 0; j < N; j++) {
			if (j == 0 || j == N - 1)
				figure[i][j] = C;
			else
				figure[i][j] = ' ';
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < N; j++) {
			printf("%c", figure[i][j]);
		}
		printf("\n");
	}
}
