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
    int a,b,c;
    cin>>a>>b>>c;
    //if c is even then after pressing c/2 buttons by anna and after that pressing c/2 buttons by katie , there will be anna's turn to her button
    if(c%2==0)
    {
        //if anna has more buttons to press,then definitely  she will win.
        //if katie has more buttons or equals buttons then she will win bcoz there will be no more button will remain for anna to press
        if(a>b)
            cout<<"First"<<sln;
        else
            cout<<"Second"<<sln;
    }
    else
    {
        //if c is odd ,then c/2+1 buttons will be pressed by anna and c/2 will be pressed by katie
        //anna pressed the last button ,now it is katie's turn to press button
        b--;
        //after that check who is having more buttons
        if(a>b)
            cout<<"First"<<sln;
        else
            cout<<"Second"<<sln;
    }
} 


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
