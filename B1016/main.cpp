/*
	B1016:����A+B
	˼·��ʹ���ַ���   //Ҳ��ֱ��ʹ������ö��ÿһλ
*/
#include <cstdio>
#include <climits>

const int MAXN = 20;

long long PX(char x[],char Dx) {
	long long result = 0;
	for (int i = 0; x[i]; i++) {
		if (x[i] == Dx) {
			result *= 10;
			result += Dx - '0';
		}
	}
	return result;
}

int main() {
	char A[MAXN], B[MAXN];
	char DA, DB;
	scanf("%s %c %s %c", A,&DA, B, &DB);
	printf("%d", PX(A, DA) + PX(B, DB));
}