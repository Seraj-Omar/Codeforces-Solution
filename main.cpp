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
const ll mod = 1e9+7;
const ll inf = 2e18+1;

ll n;
vector<vector<ll>>v,lvs;
vector<ll>dep,parent,c;
void dfs(ll i,ll d,ll p)
{
    if(v[i].size()==1&&i!=1)
        lvs[d].push_back(i);

    dep[d]++;
    parent[i]=p;

    for(auto j:v[i])
    {
        if(j!=p)
            dfs(j,d+1,i);
    }
}
void solve()
{
    cin>>n;
    v.clear();v.resize(n+1);
    lvs.clear();lvs.resize(n+1);
    dep.clear();dep.resize(n+1);
    parent.clear();parent.resize(n+1);
    c.clear();c.resize(n+1);

    for (int i = 0; i < n-1; ++i)
    {
        ll x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <=n ; ++i)
        c[i]=v[i].size();
    
    dfs(1,0,-1);

    ll l=0,r=n-1,ans=n-1;
    for (int i = 1; i <=n ; ++i)
    {
        r-=dep[i];
        ans= min(ans,l+r);
        for(auto j:lvs[i])
        {
            while(j!=1&&c[j]==1)
            {
                l++;
                j=parent[j];
                c[j]--;
            }
        }
        if(l==n-1)
            break;
    }
    cout<<ans<<'\n';
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