#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string ans;

        if(n==a && n==b) ans ="Yes";
        else if(n-a-b >1) ans ="Yes";
        else ans = "No";
        cout << ans << endl;
    }
    return 0;
}