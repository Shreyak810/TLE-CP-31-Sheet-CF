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
    vector<vector<char>> m(10,vector<char>(10));
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>m[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if((i==0 || j==0 || i==9 || j==9) && m[i][j]=='X')
            {
                ans+=1;
            }
            else if((i==1 || j==1 || i==8 || j==8) && m[i][j]=='X')
            {
                ans+=2;
            }
            else if((i==2 || j==2 || i==7 || j==7) && m[i][j]=='X')
            {
                ans+=3;
            }
            else if((i==3 || j==3 || i==6 || j==6) && m[i][j]=='X')
            {
                ans+=4;
            }
            else if(m[i][j]=='X')
                ans+=5;
        }
    }
    cout<<ans<<sln;
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
