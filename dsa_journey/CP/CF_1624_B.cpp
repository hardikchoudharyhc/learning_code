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
        ll a,b,c;
        cin>>a>>b>>c;

        ll a1 = 2*b-c;
        ll b1 = (a+c)/2;
        ll c1 = 2*b-a;
        bool flag = false;
        if(a1%a==0 && a1/a>0) flag = true;
        if(b1%b==0 && b1/b>0 && (c-a)%2 == 0) flag = true;
        if(c1%c==0 && c1/c>0) flag = true;
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}