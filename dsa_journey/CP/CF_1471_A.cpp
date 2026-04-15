#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                     
    int t;
    cin>>t;
    while(t--){
        long long n,x,min=0,max=0,sum=0;
        cin>>n>>x;
        vector<long long> a(n);

        for(int i = 0; i < n ; i++){
            cin >> a[i];

            sum += a[i];
            max += a[i]/x;

            if(a[i] % x != 0)max++;
        }
        min = (sum/x);
        if(sum % x != 0) min++;
        cout << min << " " << max << endl;
    }
    return 0;
}