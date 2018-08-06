//B1009:Ëµ·´»°

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> vc;
int main() {

	string str;
	while (cin >> str) {
		vc.push_back(str);
	}

	for (int i = vc.size() - 1; i >= 0; i--) {
		if (i)
			cout << vc[i] << " ";
		else
			cout << vc[i];
	}

}