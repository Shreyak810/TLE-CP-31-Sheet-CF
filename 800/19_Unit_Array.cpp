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
    //array contains only 1 and -1
    //array is good if a[0]+a[1]+...+a[n-1]>=0 and a[0]*a[1]*a[2]*....*a[n-1]=1.
    //we can change array elements like 1 to -1 or -1 to 1.
    //we have to perform minimum no of operations to make array good.

    //if all are -1's ,then mini no of operations are equal to n
    //if noOf(-1) > noOf(1),then we can not get positive sum.
    //if noOf(-1) <= noOf(1) and noOf(-1) is even ,then we can get a good array.
    
    //f1 -> freq of -1's 
    //f2 -> freq of 1's
    //f1<=f2 and f1 should be even
    int f1=0,f2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
            f1++;
        else
            f2++;
    }
    if(f1<=f2)
    {
        //freq of -1's is odd
        if(f1%2)
        {
            //convert any -1 to 1 that's why no of -1's will become even
            cout<<1<<sln;
        }
        else
        {
            cout<<0<<sln;
        }
    }
    else
    {
        //f1>f2
        //let assume n=7 & all the array elements are -1
        //then will try to make 4 -1's to 1's
        //means there will be 3(-1's)  & 4(1's) (we can't make 3.5(-1's) & 3.5(1's))
        //here 3=floor(n/2) 4=ceil(n/2)(f1-n/2)
        //now check no of -1's are odd or even => if odd then apply one more operation

        //in summary we need f1-n/2 (no of 1's)operations and then check f1 is odd or even and add operations

        int opr1=f1-n/2;
        if(n/2%2)
        {
            cout<<opr1+1<<sln;
        }
        else
        {
            cout<<opr1<<sln;
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
