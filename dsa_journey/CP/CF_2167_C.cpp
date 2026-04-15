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
        ll n,odd = 0, even = 0;
        cin >> n;

        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]%2 == 0)odd++;
            else even++;
        }
        if(odd == 0 || even == 0){
            for(int i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
            continue;
        }
        else sort(a.begin(),a.end());
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
        
    }
    return 0;
}