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
    int n;
    cin>>n;
    vector<int> a(n);
    vint(a,n);
    //First of all ,we are gonna check array is unsorted or not
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            cout<<0<<sln;
            return;
        }
    }
    //if array is sorted, then do operations
    //We are gonna find two elements in the array such that the difference btn them would be minimum.
    //aim :- Minimize the operations
    /*
    a1<=a2<=a3<=a4
    break the inequality between cloest elements

    1 8 10 13
       9 9
       10 8
    
    let say 
    3 7 diff=4
    4 6
    5 5
    6 4  ops=3

    5 8 diff=3
    6 7
    7 6 ops=2

    5 10 diff=5
    6 9
    7 8
    8 7 ops=3

    4 8 diff=4
    5 7
    6 6
    7 6 ops=3

    formula we get is ops=diff/2+1
    */
   int diff=INT_MAX;
   for(int i=1;i<n;i++)
   {
       diff=min(diff,a[i]-a[i-1]);
   }
   cout<<diff/2+1<<sln;
} 


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
