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
    vin(a,n);
    if(n%2)
    {
        //if n is odd ,then 
        //(a1^x)^(a2^x)^.....^(an^x)=(a1^a2^a3....^an)^(x^x^x^....^x)=(a1^a2^a3^...^an)^x=0
        //hence x is xor of all array elements
        int xor1=0;
        for(auto val:a)
        {
            xor1^=val;
        }
        cout<<xor1<<sln;
    }
    else
    {
        //if n is even ,then we have even x's so even x's xor is 0 as we know
        //means (a1^a2^....^an)^0=0 i.e., a1^a2^a3^...^an=0
        //if all the array elements xor is 0 ,then we can take any x>=0 
        //if it is not 0,then it means x does not exist at that point we can return -1.
        int xor1=0;
        for(auto val:a)
        {
            xor1^=val;
        }
        if(xor1==0)
        {
            cout<<0<<sln;
        }
        else
        {
            cout<<-1<<sln;
        }
    }
} 


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
