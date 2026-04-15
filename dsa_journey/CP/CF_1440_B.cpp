#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
   ll t;
   cin >> t;
   while (t--) {
       ll n, k, x, sum = 0, y = 0;
       cin >> n >> k;
       x = n * k;
       ll a[x];
       for (int i = 0; i < x; i++) cin >> a[i];
       reverse(a, a + x);
       ll m = n / 2;
       for (int i = m; i < x; i += (m + 1)){
           sum += a[i];
           y++;
           if (y == k) break;
       }
       cout << sum << endl;
   }
   return 0;
}