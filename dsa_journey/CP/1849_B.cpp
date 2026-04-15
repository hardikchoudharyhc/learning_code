#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<pair<ll,ll>> v(n);
        for(int i=0;i<n;i++){
            ll x;
            cin >> x;
            v[i] = {x,i+1};
        }
        for(int i = 0; i < n; i++){
            v[i].first = (v[i].first)% k;
            if(v[i].first == 0){
                v[i].first = k;
            }
        }
        sort(v.begin(),v.end(), [](pair<ll,ll> a, pair<ll,ll> b){
            if(a.first != b.first){
                return a.first > b.first;
            }
            return a.second < b.second;
        });
        for(int i=0;i<n;i++){
            cout << v[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}