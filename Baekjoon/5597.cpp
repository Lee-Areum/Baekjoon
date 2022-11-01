#include <iostream>
using namespace std;
int main(){
    bool flag[31] = {false};
    for(int i = 0;i<28;i++){
        int n; cin>>n;
        flag[n] = true;
    }
    for(int i = 1;i<=30;i++){
        if(!flag[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}
