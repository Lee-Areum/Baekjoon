//#include <iostream>
//#include <vector>
//
//using namespace std;
//int W, H, p, q,t;
//void solution() {
//	int time = t;
//	int left = W - p;
//	if (time <= left) {
//		p = p + t;
//	}
//	else {
//		time = time - left - 1;
//		if ((time / W)%2 == 0) {//¦�� - 
//			p = W - time % W - 1;
//		}
//		else {//Ȧ�� +
//			p = time % W + 1;
//		}
//	}
//	time = t;
//	left = H - q;
//	if (time <= left) {
//		q = q + t;
//	}
//	else {
//		time = time - left - 1;
//		if ((time / H) % 2 == 0) {//¦�� - 
//			q = H - time % H - 1;
//		}
//		else {//Ȧ�� +
//			q = time % H + 1;
//		}
//	}
//	cout << p << " " << q << endl;
//}
//
//int main() {
//	cin >> W >> H;
//	cin >> p >> q;
//	cin >> t;
//	solution();
//	return 0;
//}