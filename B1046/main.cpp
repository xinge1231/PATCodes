/*
	B1046:划拳
	注意：是输家喝酒
*/
#include <cstdio>

int main() {
	int N;
	int DA = 0, DB = 0;
	scanf("%d", &N);
	while (N--) {
		int A, B, HA, HB;
		scanf("%d%d%d%d", &A, &HA, &B, &HB);
		if (HA == A + B && HB != A + B)
			DB++;
		if (HB == A + B && HA != A + B)
			DA++;
	}

	printf("%d %d", DA, DB);

	return 0;
}