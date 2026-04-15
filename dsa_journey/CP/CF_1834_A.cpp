#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        int pos = 0, neg = 0, op = 0;
        cin>>n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i] == 1) pos++;
            else neg++;
        }
        while(pos<neg || neg%2 == 1){
            op++;
            neg--;
            pos++;
        }
        cout << op << endl;
        
    }
}