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

bool comp(pair<pair<ll,ll>,pair<ll,ll>> a,pair<pair<ll,ll>,pair<ll,ll>> b)
{
    return a.second.first<b.second.first;
}
void solve()
{
    ll n,m;
    cin >> n >> m;

    vector<ll> ans(n+1, 0);
    vector<pair<pair<ll,ll>,pair<ll,ll>>> sdc(m+1);

    for (int i = 1; i <= m; ++i)
    {
        cin >> sdc[i].first.first >> sdc[i].second.first >> sdc[i].second.second;
        ans[sdc[i].second.first] = m + 1;
        sdc[i].first.second=i;
    }

    std::sort(sdc.begin(), sdc.end(),comp);
    for (int i = 1; i <= m; ++i)
    {
        ll counter = 0,s=sdc[i].first.first,d=sdc[i].second.first,c=sdc[i].second.second;
        for (int j = s; j < d; ++j)
        {
            if (counter ==c)
                break;
            if (!ans[j]) {
                ans[j] = sdc[i].first.second;
                counter++;
            }
        }

        if (counter < c) {
            cout << -1 << '\n';
            return;
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
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
