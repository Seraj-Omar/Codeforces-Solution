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

void solve()
{
    ll n;cin>>n;
    vector<ll>v(n+1);
    for (int i = 1; i <=n; ++i) {
        cin>>v[i];
    }
    vector<ll>ans(n+1);
    for (int i = 1; i <=n ; ++i)
    {
        if(ans[i]!=0)
            continue;

        ll j=v[i],c=1;
        while(j!=i)
        {
            j=v[j];
            c++;
        }
        j=v[i];
        ans[i]=c;
        while(j!=i)
        {
            ans[j] = c;
            j = v[j];
        }
    }
    for (int i =1; i <=n ; ++i)
        cout<<ans[i]<<' ';
    cout<<'\n';
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