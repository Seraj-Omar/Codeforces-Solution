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

void solve()
{
    ll n, m;
    cin >> n >> m;

    queue<ll> q;
    q.push(n);

    vector<ll> value(1e5);
    vector<bool> vis(1e5);

    while (!q.empty())
    {
        ll x = q.front();
        ll y = value[x];

        if (x == m)
        {
            cout << y << '\n';
            return;
        }
        q.pop();

        if (x < m && !vis[x * 2])
        {
            value[x * 2] = y + 1;
            vis[x * 2] = true;
            q.push(x * 2);
        }

        if (x > 1 && !vis[x - 1])
        {
            value[x - 1] = y + 1;
            vis[x - 1] = true;
            q.push(x - 1);
        }
    }
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
