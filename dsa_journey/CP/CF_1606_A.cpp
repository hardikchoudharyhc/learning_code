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
        string s;
        cin >> s;

        ll n = s.length();
        if(s[0] != s[n-1]){
            s[0] = s[n-1];
            cout << s << endl;
        }
        else cout << s << endl;
    }
    return 0;
}