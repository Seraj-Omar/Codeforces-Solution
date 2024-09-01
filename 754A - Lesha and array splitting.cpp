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
    vector<ll>v(n);
    ll sum=0;
    for(auto& i:v)
    {
        cin>>i;
        sum+=i;
    }
    if(sum)
        cout<<"YES\n"<<"1\n1 "<<n<<'\n';

    else if(std::count(v.begin(), v.end(),0)==n)
        cout<<"NO"<<'\n';
    else
    {
        ll index=1;
        for (int i = 0; i < n; ++i) {
            if(v[i]) { index = i + 1;break; }
        }
        cout<<"YES\n"<<2<<'\n';
        cout<<1<<' '<<index<<'\n';
        cout<<index+1<<' '<<n<<'\n';
    }
    return;
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
