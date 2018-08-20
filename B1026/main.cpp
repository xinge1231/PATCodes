/*
	B1026:程序运行时间
*/

#include <cstdio>
#include <cmath>

const int CLK_TCK = 100;

int main() {
	int C1, C2;
	scanf("%d%d", &C1, &C2);
	int seconds =(int)round((C2 - C1)*1.0/CLK_TCK);

	int hh = 0, mm = 0, ss = 0;
	hh = seconds / 3600;
	seconds = seconds % 3600;
	mm = seconds / 60;
	ss = seconds % 60;

	printf("%02d:%02d:%02d", hh, mm, ss);
	
}