#include <iostream>
#include <string>
using namespace std;

int main() {
	while (true) {
		string str; cin >> str;
		int age, weight; cin >> age >> weight;
		if (str.compare("#") == 0)
			break;
		if (age > 17 || weight >= 80) {
			cout << str << " Senior\n";
		}
		else {
			cout << str << " Junior\n";
		}

	}
	return 0;
}
