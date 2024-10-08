#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll           long long int
#define ld           long double
#define dl            double
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
//vector<vector<ll>> v(n,vector<int>(m))//2D vector
vector<pair<ll,ll>> di = {{0,1},{1,0},{0,-1},{-1,0}};
const ll mod=1e9+7;
const ll inf=2e18+1;

void solve()
{
    ll n;cin>>n;
    ll v[n][n];
    bool vis[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin>>v[i][j];
            vis[i][j]=false;
        }
    }
    ll d=0,r=0,c=0;
    for (int i = 0; i < n*n; ++i)
    {
        cout<<v[r][c]<<' ';
        vis[r][c]=true;

        r+=di[d].first;
        c+=di[d].second;

        if(r<0||r>=n||c<0||c>=n||vis[r][c])
        {
            r-=di[d].first;
            c-=di[d].second;

            d++;
            d%=4;

            r+=di[d].first;
            c+=di[d].second;
        }

    }
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(15);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    return 0;
}
