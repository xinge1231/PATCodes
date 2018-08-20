/*
	B1020:�±�
	ע�⣺����Ӧ��״̬������ᵼ�¶δ���(����Խ���)
*/

#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct 
{
	double stroage;
	double totalPrice;
} MoonCake;

const int MAXN = 1100, MAXD = 510;

MoonCake moonCakes[MAXN];

int cmp(MoonCake m1, MoonCake m2) {
	return m1.totalPrice / m1.stroage > m2.totalPrice / m2.stroage;
}
int main() {
	int N;
	double D; 
	scanf("%d%lf", &N, &D);
	for (int i = 0; i < N; i++) {
		scanf("%lf", &(moonCakes[i].stroage));
	}

	for (int i = 0; i < N; i++) {
		scanf("%lf", &(moonCakes[i].totalPrice));
	}

	sort(moonCakes, moonCakes + N, cmp);

	double result = 0;
	int cur = 0; //��ǰ���
	while (D) {
		if (cur >= N)
			break; //����Ӧ��
		if (moonCakes[cur].stroage >= D) {
			result += moonCakes[cur].totalPrice / moonCakes[cur].stroage *D;
			break;
		}
		else {
			result += moonCakes[cur].totalPrice;
			D -= moonCakes[cur].stroage;
			cur++;
		}
	}
	printf("%.2f", result);
	return 0;
}