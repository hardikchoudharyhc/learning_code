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
        int n;
        cin>>n;

        for(int i = 0; i < n; i++){
            int k; 
            cin >> k;
            cout << n+1-k << " ";
    }
    cout << endl;
    }
    return 0;
}