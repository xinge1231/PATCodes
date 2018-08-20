/*
	A1025: PAT Ranking
*/

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

typedef struct 
{
	char registNum[13];
	int totalScore;
	int locationNum;
	int localRank;
	int finalRank;
} Testee;

int cmp(Testee t1, Testee t2) {
	if (t1.totalScore != t2.totalScore)
		return t1.totalScore > t2.totalScore;
	else
		return strcmp(t1.registNum,t2.registNum) < 0;
}
const int MAXN = 110, MAXK = 310;
Testee testees[MAXN * MAXK];

int main() {
	int N, K;
	int pos = 0; //È«¾ÖÎ»ÖÃ
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &K);
		for (int j = 0; j < K; j++, pos++) {
			scanf("%s %d", testees[pos].registNum, &(testees[pos].totalScore));
			testees[pos].locationNum = i;
		}
		sort(testees + pos - K, testees + pos, cmp);
		testees[pos - K].localRank = 1;
		for (int j = pos - K + 1; j < pos; j++) {
			if (testees[j].totalScore == testees[j - 1].totalScore)
				testees[j].localRank = testees[j - 1].localRank;
			else
				testees[j].localRank = j - pos + K + 1;
		}
	}
	sort(testees, testees + pos, cmp);
	testees[0].finalRank = 1;
	for (int i = 1; i < pos; i++) {
		if (testees[i].totalScore == testees[i - 1].totalScore)
			testees[i].finalRank = testees[i - 1].finalRank;
		else
			testees[i].finalRank = i + 1;
	}
	printf("%d\n", pos);
	for (int i = 0; i < pos; i++) {
		printf("%s %d %d %d\n", testees[i].registNum, testees[i].finalRank, testees[i].locationNum, testees[i].localRank);
	}
}