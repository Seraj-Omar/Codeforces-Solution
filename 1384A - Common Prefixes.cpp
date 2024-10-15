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

//i>=0&&j>=0&&i<n&&j<m; valid

//vector v(n,vector(m,vector<ll>(k)));//3D vector
//vector<vector<ll>> v(n,vector<ll>(m))//2D vector

//vector<ll>dx= {-1, 1, 0, 0, -1,  1, -1, 1};//8 moves
//vector<ll>dy= {0, 0, -1, 1,  1, -1, -1, 1};

//vector<ll>dx= {1,-1,0,0};//4 moves
//vector<ll>dy= {0,0,1,-1};

//memset(dp,-1,sizeof dp)
const ll mod=1e9+7;
const ll inf=2e18+1;


void solve()
{
    ll n;cin>>n;
    vector<ll>v(n);
    for(auto&i:v)cin>>i;

    ll mx= *std::max_element(v.begin(), v.end());
    string s(mx==0?1:mx,'x');
    cout<<s<<'\n';

    for(auto i:v)
    {
        s[i]^=1;
        cout<<s<<'\n';
    }
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
