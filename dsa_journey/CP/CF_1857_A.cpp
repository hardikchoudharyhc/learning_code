#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,even = 0, odd = 0;
        cin>>n;
        vector<int> a(n);
        string ans;

        for(int i = 0; i< n; i++){
            cin>>a[i];
            if(a[i]%2 == 0) even++;
            else odd++;
        }
        if(odd==0) ans ="YES";
        else if(odd == 2 && even > 0) ans ="YES";
        else if(odd%2 == 0 && odd > 3) ans ="YES";
        else if(odd == 2 && even == 0) ans ="YES";
        else ans = "NO";
        cout << ans << endl;
    }
    return 0;
}