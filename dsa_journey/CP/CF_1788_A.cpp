#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        int two = 0, op = -1, currtwo = 0;
        cin>>n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i] == 2) two++;
        }
        for(int i = 0; i < n; i++){
            if(a[i] == 2) currtwo++;
            if(currtwo == two - currtwo){
                op = i+1;
                break;
            }
        }
        cout << op << endl;
        
    }
}