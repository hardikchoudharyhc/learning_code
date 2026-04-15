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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());
        ll count=1,length=1;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k) count++;
            else count=1;
            length=max(length,count);
        }
        cout<<n-length<<endl;
    }
    return 0;
}