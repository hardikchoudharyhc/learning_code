#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        vector<ll> a(n), b(n);
        vector<pair<ll,ll>> v; // Vector to store pairs of (b[i], a[i])

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
             v.push_back({b[i], a[i]});
        }

        sort(v.begin(), v.end()); // Sort by b if tie, then by a.

        ll min_cost = p; // Initial cost if no sharing is done
        ll shared = 1; // Start with one person sharing

        for(auto &x:v){
            ll can_share = x.second; // Number of people that can share at this cost
            ll share_cost = x.first; // Cost per person if sharing at this level

            if(share_cost > p){
                break; // No sharing if the cost > p.
            }

            else if(can_share + shared >= n){ // If can_share covers all n people
                min_cost += (n - shared) * share_cost; // Add the cost for the remaining people who need to share
                shared = n; // All people are now sharing, so we can end the loop
                break;
            }

            else{
                min_cost += share_cost * can_share; // Add the cost for can_share people sharing at this level
                shared += can_share; // Update the number of people sharing
            }
        }
        
        min_cost += (n - shared) * p; // Add the cost for any remaining people who are not sharing
        cout<<min_cost<<endl;

    }
    return 0;
}