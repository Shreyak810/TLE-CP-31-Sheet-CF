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
    int n,m;
    cin>>n>>m;
    string x;
    string s;
    cin>>x;
    cin>>s;
    if(x.compare(s) == 0 || x.find(s)!=string::npos)
    {
        cout<<0<<"\n";
        return;
    }
    int cnt=0;
    while(x.size()<=25)
    {
        x+=x;
        cnt++;
        if(x.find(s)!=string::npos)
        {
            cout<<cnt<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
