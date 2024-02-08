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
    a[1]+a[2]=a[2]+a[3]=a[3]+a[4]=a[4]+a[5]=..........=a[n-1]+a[n]=k

    for n=5,
    a[1]+a[2]=a[2]+a[3]=a[3]+a[4]=a[4]+a[5]
    let's consider seperate expressions here,
    a[1]+a[2]=a[2]+a[3] ==> a[1]=a[3]
    a[2]+a[3]=a[3]+a[4] ==> a[2]=a[4]
    a[3]+a[4]=a[4]+a[5] ==> a[3]=a[5]
    a[1]=a[3]=a[5]
    a[2]=a[4]

    for n=6,
    a[1]+a[2]=a[2]+a[3]=a[3]+a[4]=a[4]+a[5]=a[5]+a[6]
    let's consider seperate expressions here,
    a[1]+a[2]=a[2]+a[3] ==> a[1]=a[3]
    a[2]+a[3]=a[3]+a[4] ==> a[2]=a[4]
    a[3]+a[4]=a[4]+a[5] ==> a[3]=a[5]
    a[4]+a[5]=a[5]+a[6] ==> a[4]=a[6]
    a[1]=a[3]=a[5]
    a[2]=a[4]=a[6]

    If array contains all the same elements , then it is valid condition so # of unique elements must be <=2
    If n is odd , there should be 2 unique elements whose freq must be n/2 and (n+1)/2 respectively.
    If n is eeven , there should be 2 unique elements whose freq is n/2.
    */
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[a[i]]++;
    }
    if(mpp.size()==1)
    {
        yes;
    }
    else if(mpp.size()==2)
    {
        auto it=mpp.begin()->second;
        if(it!=n/2 && it!=(n+1)/2)
            no;
        else
            yes;
    }
    else
    {
        no;
    }
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;cin>>t;
    while(t--)
        solve();
};
