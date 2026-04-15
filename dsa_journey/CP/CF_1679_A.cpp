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
        ll n,maxi=0,mini=0;
        cin>>n;

        if(n<4 || n%2 == 1){
            cout<<-1<<endl;
            continue;
        }
        if(n%4>=0 && n%6>1){
            mini=n/6+1;
        }
        else{
            mini=n/6;
        }
        maxi=n/4;
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}