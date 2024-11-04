#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll           long long int
#define ld           long double
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered set

template<typename T>
using o_mset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered multiset

//vector v(n,vector(m,vector<ll>(k)));//3D vector
//vector<vector<ll>> v(n,vector<ll>(m))//2D vector

//vector<ll> dx = {-1, 1, 0, 0, -1,  1, -1, 1};//8 moves
//vector<ll> dy = {0, 0, -1, 1,  1, -1, -1, 1};

//vector<ll> dx = {1,-1,0,0};//4 moves
//vector<ll> dy = {0,0,1,-1};

//memset(dp,-1,sizeof dp)
const ll N=1e5+1;
const ll mod = 1e9+7;
const ll inf = 2e18+1;
ll n,k,z;
vector<ll>v;
ll dp[N][6];
ll calc(ll i,ll w,ll z)
{
    if(w==-1)
        return 0;
    if(dp[i][z]!=-1)
        return dp[i][z];

    ll ans=-1;
    if(i&&w&&z)
        ans=max(ans,calc(i-1,w-1,z-1)+v[i]);
    ans=max(ans,calc(i+1,w-1,z)+v[i]);

    return dp[i][z]=ans;
}
void solve()
{
    cin>>n>>k>>z;
    v.resize(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            dp[i][j]=-1;
        }
    }
    for(auto&i:v)
        cin>>i;
    cout<<calc(0,k,z)<<'\n';
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(15);
    ll t = 1;
    cin>>t;
    while (t--) { solve(); }
    return 0;
}