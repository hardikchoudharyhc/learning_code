#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin>>k;
    while(k--){
        ll n;
        cin >> n;
        string s,t;
        cin >> s >> t;

        vector<ll> freq1(26,0);
        vector<ll> freq2(26,0);

        for(int i = 0; i < n; i++){
            freq1[s[i] - 'a']++;
        }
        bool flag = true;
        for(int i = 0; i < n; i++){
            freq2[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++){
            if (freq1[i] != freq2[i]){
                flag = false;
                break;
            }
        }

        if(!flag) cout << "NO" << endl;
        else cout << "YES" << endl;
        
        
    }
    return 0;
}