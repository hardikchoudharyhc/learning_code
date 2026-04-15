#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                     
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long zero = 0,one=0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0') zero++;
            else one++;
        }
        long long ans = min(zero,one);
        if(ans%2 == 0)cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
    return 0;
} 