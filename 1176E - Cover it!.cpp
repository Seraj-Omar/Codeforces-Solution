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
//vector v(n,vector(m,vector<ll>(k)));//3D vector
//vector<vector<ll>> vec(n,vector<int>(m))//2D vector
vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
const ll mod=1e9+7;
ll n,m,counter;
vector<vector<ll>>v;
vector<bool>vis;
vector<ll>one,zero,color;
void dfs(ll i)
{
    vis[i]=true;
    if(color[i])
        one.push_back(i);
    else
        zero.push_back(i);

    for(auto j:v[i])
    {
        if(!vis[j])
        {
            color[j]=(!color[i]);
            dfs(j);
        }
    }
}
void solve()
{
    cin>>n>>m;
    counter=0;
    v.clear();v.resize(n+1);
    vis.clear();vis.resize(n+1);
    one.clear();zero.clear();
    color.clear();color.resize(n+1);
    while(m--)
    {
        ll x,y;cin>>x>>y;
        v[x].emplace_back(y);
        v[y].emplace_back(x);
    }
    color[1]=1;
    dfs(1);

    if(one.size()<zero.size())
    {
        cout<<one.size()<<'\n';
        for(auto i:one)
            cout<<i<<' ';
        cout<<'\n';
    }
    else
    {
        cout<<zero.size()<<'\n';
        for(auto i:zero)
            cout<<i<<' ';
        cout<<'\n';
    }
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(9);
    ll t=1;
    cin>>t;
    while (t--){solve();}
    return 0;
}
