#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long temp = n;
        long long ans = 0,dig = 0;
        while(n){
            dig++;
            n=n/10;
        }

        long long din = pow(10,dig - 1);
        ans = (dig-1)*9 + temp/din;
        cout << ans << endl;

    }
    return 0;
}