#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n, ans = 0, last = 0;
        cin>>n;
        vector<ll> a(n);
        
        for(int i = 0; i < n ; i++) cin >> a[i]; 

        for(int i = 0; i < n; i++){
            if(a[i] == 0 && last == 1) last = 0;
            else if(a[i] != 0 && last == 0){
                ans++;
                last = 1;
            }
        }
        cout << min(ans,2) << endl;
    }
    return 0;
}