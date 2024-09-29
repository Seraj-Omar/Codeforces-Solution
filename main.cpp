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
vector<pair<ll,ll>> di = {{1,1},{-1,-1},{0,0}};
const ll mod=1e9+7;
const ll inf=2e18+1;

vector<ll>primes(1e5+1);
void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for(auto& i:v)
        cin>>i;

    set<ll>ss(v.begin(),v.end());
    if(ss.size()<k)
        cout<<"NO"<<'\n';
    else
    {
        vector<pair<ll,ll>>vv;
        for (int i = 0; i < n; ++i)
        {
            vv.push_back({v[i],i+1});
        }
        std::sort(vv.begin(), vv.end());
        cout<<"YES"<<'\n';
        vector<ll>ans;
        for (int i = 1; i <n ; ++i)
        {
            if(vv[i].first!=vv[i-1].first)
                ans.push_back(vv[i-1].second);
            if(ans.size()>=k-1)
                break;
        }
        ans.push_back(vv[n-1].second);
        std::sort(ans.begin(), ans.end());
        for(auto i:ans)
            cout<<i<<' ';
        cout<<'\n';
    }

}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(10);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    return 0;
}