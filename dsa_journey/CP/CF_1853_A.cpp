#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        int ans = 0;
        int diff = INT_MAX;
        bool unsorted = false;

        cin >> a[0];
        for(int i = 1; i < n; i++){
            cin>>a[i];
            
            if(a[i] < a[i-1]) unsorted = true;
            else diff = min(diff,a[i] - a[i-1]);
        }
        if(unsorted){
            cout << ans << endl;
            continue;
        }

        ans = diff/2 + 1;
        cout << ans << endl;

    }
    return 0;
}