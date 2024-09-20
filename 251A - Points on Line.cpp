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
//vector<vector<ll>> v(n,vector<int>(m))//2D vector
vector<pair<ll,ll>> di = {{1,1},{-1,-1},{0,0}};
const ll mod=1e9+7;
const ll inf=2e18+1;
ll n,d;
vector<ll>v;
void solve()
{
    cin>>n>>d;
    v.resize(n);
    for(auto& i:v)
        cin>>i;

    if(n<3)
    {
        cout<<0<<'\n';
        return;
    }

    ll answer=0;
    for (int i = 0; i < n-2; ++i)
    {
        ll j= std::upper_bound(v.begin()+i, v.end(),v[i]+d)-v.begin();
        ll l=j-i-1;
        answer+=(l*(l-1))/2;
    }
    cout<<answer<<'\n';
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
