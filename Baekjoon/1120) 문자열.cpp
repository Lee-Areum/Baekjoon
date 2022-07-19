#include <iostream>
#include <string>
using namespace std;
int main(){
    int minSame = 100;
    string s1,s2;
    cin>>s1>>s2;
    for(int i = 0;i<=(s2.size()-s1.size());i++){
        int diff = 0;
        for(int k = 0;k<s1.size();k++){
            if(s1[k] != s2[k+i]){
                diff++;
            }
        }
        minSame = (minSame > diff)?diff:minSame;
    }
    cout<<minSame<<endl;
    return 0;
}
