//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//int main() {
//	int N; scanf("%d", &N);
//	bool list[25] = { false };
//	for (int i = 0; i < N; i++) {
//		char str[25]; int n;
//		scanf("%s", &str);
//		if (strcmp(str,"all") == 0) {
//			memset(list, true, 25);
//		}
//		else if (strcmp(str,"empty") == 0) {
//			memset(list, false, 25);
//		}
//		else {
//			scanf("%d", &n);
//			if (strcmp(str, "add") == 0) {
//				list[n] = true;
//			}
//			else if (strcmp(str, "remove") == 0) {
//				list[n] = false;
//			}
//			else if (strcmp(str, "check") == 0) {
//				printf("%d\n", list[n]);
//			}
//			else if (strcmp(str, "toggle") == 0) {
//				list[n] = !list[n];
//			}
//		}
//	}
//	return 0;
//}