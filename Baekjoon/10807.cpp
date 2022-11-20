#include <iostream>
#include <map>
using namespace std;

int main(){
    int N; cin>>N;
    map<int, int> m;
    for(int i= 0;i<N;i++){
        int n; cin>>n;
        m[n]++;
    }
    int n; cin>>n;
    cout<<m[n]<<endl;
    return 0;
}
