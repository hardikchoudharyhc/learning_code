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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        ll mn = *min_element(a.begin(),a.end());
        if(mn == 0){
            cout << 1 << endl;
            continue;
        }
        int j = 2;
        while(true){
            for(int i = 0; i < n; i++){
                if(gcd(a[i],j) == 1){
                    cout << i << endl;
                    break;
                }
                
            }
            j++;
        }
    }
    return 0;
}