#include<bits/stdc++.h>
using namespace std;

bool istrue(string x,string s){
    int n = x.length();
    int m = s.length();

    if(n<m) return false;
    for(int i = 0; i < n-m+1; i++){
        if(x.substr(i,m) == s) return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string x,s;
        cin>>x>>s;

        string x1 = x+x;
        string x2 = x1+x1;
        string x3 = x2+x2;
        string x4 = x3+x3;
        string x5 = x4+x4;
        int ans = -1;

        if(istrue(x,s)) ans = 0;
        else if(istrue(x1,s)) ans = 1;
        else if(istrue(x2,s)) ans = 2;
        else if(istrue(x3,s)) ans = 3;
        else if(istrue(x4,s)) ans = 4;
        else if(istrue(x5,s)) ans = 5;

        cout << ans << endl;

    }
    return 0;
}