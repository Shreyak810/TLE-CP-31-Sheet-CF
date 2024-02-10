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

/*
1<= n*m <=25
len(x)=n , len(s)=m
x->xx->xxxx-> xxxxxxxx ->xxxxxxxxxxxxxxxx

worst case is x=1,s=25
let x='a'
s='aaaaaa.......a'
'a'-> 'aa' -> 'aaaa' -> 'aaaaaaaa' -> 'aaaaaaaaaaaaaaaa'(16) -> 'aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'(32)

there will be at max 5 operations
so,try to doing the operations 5 times.
even after 5 operations , s in not being part of x,then print -1.
if after applying opeartions ith time , then print i if s is part of x.
*/

void solve() {
    int n,m;
    cin>>n>>m;
    string x;
    string s;
    cin>>x;
    cin>>s;
    
    /*if(x.compare(s) == 0 || x.find(s)!=string::npos)
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
    cout<<-1<<"\n";*/
    for(int ops=0;ops<=5;ops++)
    {
        if(x.find(s)!=string::npos)
        {
            cout<<ops<<sln;
            return;
        }
        x+=x;
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
