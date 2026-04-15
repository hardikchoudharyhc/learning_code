#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,length = 0, maxlength = 0;
        cin>>n;
        vector<long long> a(n);

        for(int i=0; i<n;i++){
            cin>>a[i];
            if(a[i] == 0) length++;
            else length = 0;
            maxlength = max(maxlength,length);
        }
        cout << maxlength << endl;
    }
}