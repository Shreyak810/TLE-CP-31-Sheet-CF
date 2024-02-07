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
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a[i]=x;
    }
    /*Select an index i,from 2 to n−1 such that a[i−1]<a[i] and a[i]>a[i+1] Swap a[i] and a[i+1].
Determine whether it is possible to sort the permutation after a finite number of operations.*/
    //If a[0]>a[1],then it is not possible to sort given permutation
    if(a[0]>a[1])
    {
        no;
        return;
    }
    //check if given permutation is already sorted or not
    bool flg=true;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            flg=false;
            break;
        }
    }
    if(flg)
    {
        yes;
        return;
    }
    //if not sorted , do operations
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    if(a[0]!=1)
    {
        no;
    }
    else
    {
        yes;
    }
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
