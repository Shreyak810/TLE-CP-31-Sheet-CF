#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
// A.order_of_key(x) - smaller than x,
// *A.find_by_order(x) - element at xth index 

using namespace std;
#define ll long long
//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define vll vector<ll>
#define vbll vector<bool>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define pb push_back
ll mod = (ll)(1e9+7);
double pi = 3.141592653589793238;
ll inf = 1e18;
#define sln "\n"
#define fi first
#define se second
#define vin(v,n) for(ll i=0;i<n;i++) cin>>v[i]
#define vint(v,n) for(int i=0;i<n;i++) cin>>v[i]
#define even cout<<"EVEN\n";
#define odd cout<<"ODD\n";

void solve() {
    int sx, sy, dx, dy;
    cin >> sx >> sy >> dx >> dy;
    if (sx == dx && sy == dy) {
        cout << 0 << sln;
    } else if (sy <= dy) {
        if (sy == dy && sx > dx) {
            cout << sx - dx << sln;
        } else if (sy == dy && sx < dx) {
            cout << -1 << sln;
        } else {
            // Make sy equal to dy
            int opr = dy - sy;
            sx += opr;
            // Check if sx < dx, if yes, then it is impossible
            if (sx < dx) {
                cout << -1 << sln;
            } else {
                cout << opr + sx - dx << sln;
            }
        }
    } else {
        // sy > dy, then it is impossible to go from s to d
        cout << -1 << sln;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}