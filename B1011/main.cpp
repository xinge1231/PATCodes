/*
	B1011:A+B和C
	使用补码溢出判断(未A)
*/
/*
#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		int A, B, C;
		int result;
		scanf("%d%d%d", &A, &B, &C);

		if (A > 0 && B > 0 && A + B <= 0) {
			result = 1;
		}
		else if (A < 0 && B < 0 && A + B>=0) {
			result = 0;	
		}
		else {
			result = (A + B > C);
		}

		if (result) {
			printf("Case #%d: true\n", i);
		}
		else {
			printf("Case #%d: false\n", i);
		}
	}
}
*/

#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		long long A, B, C;
		scanf("%lld%lld%lld", &A, &B, &C);


		if (A + B > C) {
			printf("Case #%d: true\n", i);
		}
		else {
			printf("Case #%d: false\n", i);
		}
	}
}