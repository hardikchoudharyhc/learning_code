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
        ll x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(y1>y2){
            cout << -1 << endl;
            continue;
        }
        ll step = y2 - y1;
        x1 += step;

        if(x2>x1){
            cout << -1 << endl;
            continue;
        }
        step += (x1-x2);
        cout << step << endl;
    }
    return 0;
}