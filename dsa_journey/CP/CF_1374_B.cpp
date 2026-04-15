#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,two=0,three=0;
        cin>>n;
        
        while(n>0 && n % 3 == 0){
            n=n/3;
            three++;
        }
        while(n>0 && n % 2 == 0){
            n=n/2;
            two++;
        }

        if(n>1 || two>three) cout << "-1" << endl;
        else cout << three + (three-two) << endl;
    }
    return 0;
}