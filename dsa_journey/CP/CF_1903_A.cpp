#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        string ans;
        cin>>a[0];
        for(int i = 1; i < n; i++){
            cin>>a[i];
        }
        vector<int> b = a;
        sort(b.begin(),b.end());
        if(k>1 || a==b) ans = "YES";
        else ans = "NO";
        cout << ans << endl;
    }
    return 0;
}
