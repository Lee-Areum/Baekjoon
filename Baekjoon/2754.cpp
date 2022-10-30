#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; cin >> str;
	float max_cost = 0;
	cout << fixed; cout.precision(1);
	switch (str[0])
	{
	case 'A' : 
		max_cost = 4.3;
		if (str[1] == '+') {
			cout << max_cost << endl;
		}else if(str[1] == '0') {
			cout << max_cost - 0.3 << endl;
		}
		else {
			cout << max_cost - 0.6 << endl;
		}
		break;
	case 'B':
		max_cost = 3.3;
		if (str[1] == '+') {
			cout << max_cost << endl;
		}
		else if (str[1] == '0') {
			cout << max_cost - 0.3 << endl;
		}
		else {
			cout << max_cost - 0.6 << endl;
		}
		break;
	case 'C':
		max_cost = 2.3;
		if (str[1] == '+') {
			cout << max_cost << endl;
		}
		else if (str[1] == '0') {
			cout << max_cost - 0.3 << endl;
		}
		else {
			cout << max_cost - 0.6 << endl;
		}
		break;
	case 'D':
		max_cost = 1.3;
		if (str[1] == '+') {
			cout << max_cost << endl;
		}
		else if (str[1] == '0') {
			cout << max_cost - 0.3 << endl;
		}
		else {
			cout << max_cost - 0.6 << endl;
		}
		break;
	case 'F':
		cout << "0.0" << endl;
		break;
	}
    return 0;
}
