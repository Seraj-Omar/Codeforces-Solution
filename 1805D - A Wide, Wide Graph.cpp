#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered set

template<typename T>
using o_mset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered multiset

//i>=0&&j>=0&&i<n&&j<m; valid
vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
const ll mod=1e9+7;
ll n,mx,node;
vector<vector<ll>>v;
vector<ll>val;
void dfs(ll i,ll dist,ll prev)
{
    for(auto j:v[i])
    {
        if(j==prev)continue;
        dfs(j,dist+1,i);
    }
    if(mx<=dist)
    {
        mx=dist;
        node=i;
    }
    val[i]= max(dist,val[i]);
}
void solve()
{
    cin>>n;
    v.resize(n+1);
    val.resize(n+1);
    for (int i = 0; i < n-1; ++i)
    {
        ll x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    mx=0,node=-1;
    dfs(1,0,-1);

    mx=0;
    dfs(node,0,-1);

    mx=0;
    dfs(node,0,-1);

    std::sort(val.begin(), val.end());
    for (int i = 1; i <=n ; ++i)
    {
        ll num=std::lower_bound(val.begin()+1, val.end(),i)-val.begin();
        cout<< ((num>n)?n:num)<<' ';
    }
    cout<<'\n';
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(9);

    ll t=1;
//    cin>>t;
    while (t--){solve();}
    return 0;
}
