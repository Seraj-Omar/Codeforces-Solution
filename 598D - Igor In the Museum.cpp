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

/*----------------------Graph Moves----------------*/
//vector<ll> dx={1,-1,0,0};//4 moves
//vector<ll> dy={0,0,1,-1};

//vector<ll> dx = {-1, 1, 0, 0, -1,  1, -1, 1};//8 moves
//vector<ll> dy = {0, 0, -1, 1,  1, -1, -1, 1};

//vector<ll> dx={0, 0, 1, -1, -1, 1, -1, 1};//Kings Move
//vector<ll> dy={-1, 1, 0, 0, 1, 1, -1, -1};

//vector<ll> dx={-2, -2, -1, -1, 1, 1, 2, 2};//Knights Move
//vector<ll> dy={-1, 1, -2, 2, -2, 2, -1, 1};
/*------------------------------------------------*/

//memset(dp,-1,sizeof dp)
const ll N=1e5+1;
const ll mod = 1e9+7;
const ll inf = 2e18+1;
const ld PI=3.14159;

ll n,m,k;
vector<string>v(1001);
bool vis1[1001][1001],vis2[1001][1001];
ll ans[1001][1001];

ll dfs(ll i,ll j)
{
    if((vis1[i][j]&&v[i][j]=='.')||i<0||i>=n||j<0||j>=m)
        return 0;

    vis1[i][j]=true;

    if(v[i][j]=='*')
        return 1;

    ll c=0;
    c+= dfs(i+1,j);
    c+= dfs(i-1,j);
    c+= dfs(i,j+1);
    c+= dfs(i,j-1);

    return c;
}

void dfs2(ll i,ll j,ll c)
{
    if(vis2[i][j] || i<0 || j<0 ||  i>=n || j>=m || v[i][j]=='*')
        return ;

    vis2[i][j]=true;
    ans[i][j]=c;

    dfs2(i+1,j,c);
    dfs2(i-1,j,c);
    dfs2(i,j+1,c);
    dfs2(i,j-1,c);
}
void solve()
{
    cin>>n>>m>>k;
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    while(k--)
    {
        ll r,c;cin>>r>>c;
        r--;c--;
        if(vis2[r][c])
            cout<<ans[r][c]<<'\n';
        else
        {
            ll x= dfs(r,c);
            dfs2(r,c,x);
            cout<<x<<'\n';
        }
    }
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(15);
    ll t = 1;
//    cin>>t;
    while (t--) { solve(); }
    return 0;
}
