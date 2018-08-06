//D½øÖÆµÄA+B

#include <cstdio>
#include <vector>

using namespace std;

vector<int> result;
int main() {
	int A, B, D;
	scanf("%d%d%d", &A, &B, &D);
	int sum = A + B;
	while (sum / D) {
		result.push_back(sum%D);
		sum /= D;
	}
	printf("%d", sum);
	for (int i = result.size() - 1; i >= 0; i--) {
		printf("%d", result[i]);
	}
}