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
//let's say team1 won the match against team2 and team1 scored 2 goal and team 2 scored 1 goal.
//Efficiency is difference of team1 score and team2 score 
//That's why team1's effficiency is 2-1=1
//and team2's efficiency would be 1-2=-1
//Total efficiency of all teams is 0.
//So,Missing team efficiency is total efficiency * -1
void solve() {
    int n;
    cin>>n;
    vector<int> a(n-1);
    vint(a,n-1);
    int total=0;
    for(int i=0;i<n-1;i++)
        total+=a[i];
    cout<<-1*total<<sln;
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
