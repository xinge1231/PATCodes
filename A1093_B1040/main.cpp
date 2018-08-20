/*
	A1093/B1040:有几个PAT
	思路：递推
*/

#include <cstdio>
#include <cstring>

const int MAXN = 100100;
const int MOD = 1000000007;
char str[MAXN] = { 0 };
int leftP[MAXN] = { 0 };
int rightT[MAXN] = { 0 };
int main() {
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == 'P' && i == 0) {
			leftP[i] = 1;
		}
		else if (str[i] == 'P') {
			leftP[i] = leftP[i - 1] + 1;
		}
		else {
			leftP[i] = leftP[i - 1];
		}
		
	}

	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == 'T' && i == len - 1) {
			rightT[i] = 1;
		}
		else if (str[i] == 'T') {
			rightT[i] = rightT[i + 1] + 1;
		}
		else {
			rightT[i] = rightT[i + 1];
		}
	}

	long long result = 0;

	for (int i = 1; i < len - 1; i++) {
		if (str[i] == 'A') {
			result += leftP[i - 1] * rightT[i + 1];
		}
	}
	printf("%d", result%MOD);

	return 0;
}