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
        ll n,q,sum = 0;
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> arrsum(n+1,0);

        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum += a[i];
        }
        arrsum[0] = a[0];
        for(int i = 1; i <= n; i++){
            arrsum[i] = arrsum[i-1] + a[i-1];
        }

        while(q--){
            ll l,k,r,remsum = 0,addsum = 0,totalsum = 0;
            cin >> l >> r >> k;
            remsum = arrsum[r] - arrsum[l-1];
            addsum = (r-l+1)*k;
            totalsum = sum - remsum + addsum;
            if(totalsum%2 == 1) cout << "YES" <<endl;
            else cout << "NO" << endl;
        }
        
    }
    return 0;
}