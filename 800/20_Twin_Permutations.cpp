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
    int n;cin>>n;
    vector<int> a(n);
    vin(a,n);
    /*
    given a,find b such that,
    e.g., n=5
    a1+b1<=a2+b2<=a3+b3<=a4+b4<=a5+b5

    simplify the inequality 
    such that,
    a1+b1=a2+b2=a3+b3=a4+b4=a5+b5

    n=5,
    a={1,2,3,4,5} or {5,3,4,1,2}
    b={5,4,3,2,1} or {1,3,2,5,4}

    for any a[i],b[i]=(n+1)-a[i]
    */
    for(int i=0;i<n;i++)
    {
        cout<<(n+1)-a[i]<<" ";
    }
    cout<<sln;
} 


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
