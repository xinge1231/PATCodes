/*
	B1016:部分A+B
	思路：使用字符串   //也可直接使用整数枚举每一位
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