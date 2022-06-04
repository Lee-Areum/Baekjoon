#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, B;
int answer = 99999999;
int height = 0;
void check(vector<vector<int>>& list, int i) {
    int count = 0;
    int out = 0;
    bool flag = true;
    for (int j = 0; j < N; j++) {
        for (int k = 0; k < M; k++) {
            flag = true;
            if (list[j][k] >= i) {
                count += (list[j][k] - i) * 2;
                out += list[j][k] - i;
            }
            else {
                int sum = (i - list[j][k]);
                if (out + sum > B) {
                    flag = false;
                    break;
                }
                count += sum;
                out += sum;
            }
        }
    }
    if (flag && count <= answer) {
        answer = count;
        height = i;
    }
    return;
}

int main() {
    cin >> N >> M >> B;
    vector<vector<int>> list;
    int maxs = 0, mins = 99999999;
    for (int i = 0; i < N; i++) {
        vector<int> tmp;
        for (int k = 0; k < M; k++) {
            int n; cin >> n;
            tmp.push_back(n);
            mins = min(mins, n);
            maxs = max(maxs, n);
        }
        list.push_back(tmp);
    }
    for(int i = mins;i<=maxs;i++){
        check(list, i);
    }
    cout << answer << " " << height << endl;
    return 0;
}