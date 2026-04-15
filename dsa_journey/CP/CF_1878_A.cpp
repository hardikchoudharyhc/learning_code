#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        unordered_map<int,int> freq;
        string ans = "NO";

        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] == k) ans = "YES";
        }
        cout <<ans<< endl;
    }
}