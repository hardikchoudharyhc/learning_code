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
        ll ans = INT_MAX;
        string s;
        cin >> s;
        ll n = s.length();

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int temp = 10 * (s[i] - '0') + (s[j] - '0');
                if (temp % 25 == 0) {
                ans = min(ans, n - (i + 2));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}