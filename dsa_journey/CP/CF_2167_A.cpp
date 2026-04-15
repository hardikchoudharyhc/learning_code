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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

    
        if((a==b) && (b == c) && (c == d) && (d == a)) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}