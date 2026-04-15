#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string c;
        cin >> c;

        int three = 0;
        int ones = 0;

        for(int i = 0; i < n; i++){
            if(c[i] == '.' && i+2<n && c[i+1] == '.' && c[i+2] =='.'){
                three = 1;
                break;
            }
            else if(c[i] == '.') ones++;
        }
        if(three) cout << 2 << endl;
        else cout << ones << endl;
    }
}