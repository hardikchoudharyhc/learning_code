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
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        unordered_map<ll,ll> freq;
        
        for(int i=0;i<n;i++){
            freq[a[i]]++;
            freq[b[i]]++;
        }

        
        ll maxfreq=0;
        for(auto &i : freq) maxfreq = max(maxfreq,i.second);

        cout<<maxfreq<<endl;
    }
    return 0;
}