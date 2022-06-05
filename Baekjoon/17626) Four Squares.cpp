//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int N; cin >> N;
//	int nums[50001];
//	fill_n(nums, 50001, 50001);
//	for (int i = 1; i <= N; i++) {
//		for (int k = 1; k <= sqrt(i); k++) {
//			nums[k*k] = 1;
//			int comp = nums[k * k] + nums[i - (k * k)];
//			nums[i] = min(nums[i],comp);
//		}
//	}
//	cout << nums[N] << endl;
//	return 0;
//}