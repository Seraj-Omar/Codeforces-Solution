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

ll Max;
vector<vector<ll>>v;
void dfs(ll i,ll c)
{
    Max= max(Max,c);
    for(auto j:v[i])
        dfs(j,c+1);
}
void solve()
{
    ll n;cin>>n;

    vector<ll>noManager;
    v.resize(n+1);
    for (int i = 1; i <=n ; ++i)
    {
        ll x;cin>>x;
        ((x==-1)?noManager.push_back(i):v[x].push_back(i));
    }

    for(auto i:noManager)
        dfs(i,1);

    cout<<Max<<'\n';
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
