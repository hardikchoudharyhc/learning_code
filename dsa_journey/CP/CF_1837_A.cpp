#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                     
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        if(n%k==0){
            cout<<2<<endl;
            cout<<n-1<< " "<<1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<n<<endl;
        }
    }
    return 0;
}