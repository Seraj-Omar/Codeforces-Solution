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
    ll n;cin>>n;
    if(!(n%2))
        cout<<-1<<'\n';
    else
    {
        vector<ll>a(n),b(n),c(n);
        for (int i = 0; i < n; ++i)
        {
            a[i]=i;
            b[i]=i==n-1?0:i+1;
            c[i]=(a[i]+b[i])%n;
        }
        for(auto i:a)
            cout<<i<<' ';
        cout<<'\n';

        for(auto i:b)
            cout<<i<<' ';
        cout<<'\n';

        for(auto i:c)
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
//    cin>>t;
    while (t--){solve();}
    return 0;
}
