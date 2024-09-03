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
    for(auto& i:v)cin>>i;

    ll counter=0;
    for (int i = 0; i < n; ++i)
    {
        ll l=0,r=n-1,sum=0,sub=0;
        while(sub<n)
        {
            if(sum==v[i]&&l-sub>1)
            {
                counter++;
                sum=0;
                break;
            }
            if (sum<v[i]&&l<n)
                sum+=v[l++];
            else
                sum-=v[sub++];
        }
    }
    cout<<counter<<'\n';
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(9);

    ll t=1;
    cin>>t;
    while (t--){solve();}
    return 0;
}
