#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                     
    int t;
    cin>>t;
    while(t--){
        long long n,ans = 0;
        cin>>n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        for(int j = 1; j < n-1; j++){
            int i1 = -1, k1 = -1;
            for(int i = 0; i < j; i++){
                if(a[i]<a[j]){
                    i1 = i;
                    break;
                }
            }
            for(int k = j+1; k < n; k++){
                if(a[k]<a[j]){
                    k1 = k;
                    break;
                }
            }

            if(i1 != -1 && k1 != -1){
                cout << "YES" << endl;
                cout << i1+1 << " " << j+1 << " " << k1+1 <<  endl;
                ans = 1;
                break;
            }
        }
        if(!ans){
            cout << "NO" << endl;
        }
        
    }
    return 0;
}