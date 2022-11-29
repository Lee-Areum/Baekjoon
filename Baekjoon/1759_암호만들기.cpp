#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string alpha;
int L, C;
bool visited[16] = { false };
void getPattern(int index, int cnt, int a, int b, string str) {
	if (cnt == L) {
		if (a >= 1 && b >= 2) {
			sort(str.begin(), str.end());
			cout << str << endl;
		}
		return;
	}
	if (index == alpha.size()) return;
	int da = a, db=b;
	if (alpha[index] == 'a' || alpha[index] == 'e' || alpha[index] == 'i' || alpha[index] == 'o' || alpha[index] == 'u') {
		da++;
	}
	else {
		db++;
	}
	getPattern(index + 1, cnt + 1, da, db, str + alpha[index]);
	getPattern(index + 1, cnt,a,b, str);
}


int main() {
	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		char c; cin >> c;
		alpha.push_back(c);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		}
	}
	sort(alpha.begin(), alpha.end());
	string tmp;
	getPattern(0,0,0,0,tmp);
	return 0;
}
