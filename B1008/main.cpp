/*
	B1008:����ѭ������
	˼·��ʹ���˸������顣 //���ø������ƶ��������ٵķ�����ʵս5.2
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