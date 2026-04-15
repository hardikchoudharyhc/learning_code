#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        string ans;

        if(a==b){
            if(c%2 == 1) ans = "First";
            else ans =  "Second";
        }
        else if(a>b) ans = "First";
        else ans = "Second";
        cout << ans << endl;
    }
    return 0;
}