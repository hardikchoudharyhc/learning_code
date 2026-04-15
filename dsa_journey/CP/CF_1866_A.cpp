#include<bits/stdc++.h>
using namespace std;

int main(){
        long long n,mini = INT_MAX;
        cin>>n;

        vector <long long> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] == 0)
            {
                cout << "0" << endl;
                return 0;
            } 
            else if(a[i]>0) mini = min(mini,a[i]);
            else mini = min(mini,-a[i]);
        }
        cout<<mini<<endl;
        return 0;
    }