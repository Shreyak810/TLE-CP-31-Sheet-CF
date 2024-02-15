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
    //If all the elements of an array are same,then it is not possible to obtain array b and c
    bool flg=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            flg=1;
            break;
        }
    }
    if(flg==0)
    {
        cout<<-1<<sln;
        return;
    }
    vector<int> b,c;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            b.pb(1);
    }
    if(b.size()==0)
    {
        b.pb(a[0]);
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[0])
                b.pb(a[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b.back())
           c.pb(a[i]);
    }
    cout<<b.size()<<" "<<c.size()<<sln;
    for(auto it:b){
        cout<<it<<" ";
    }
    cout<<sln;
    for(auto it:c){
        cout<<it<<" ";
    }
    cout<<sln;
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
        solve();
};
