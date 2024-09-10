#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll           long long int
#define ld           long double
#define d            double
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
//vector<vector<ll>> vec(n,vector<int>(m))//2D vector
vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
const ll mod=1e9+7;
const ll inf=2e18+1;

void solve()
{
    ll n,s;cin>>n>>s;
    vector<ll>v(n);
    ll sum=0;
    for(auto& i:v)cin>>i,sum+=i;

    if(sum<s)
        cout<<-1<<'\n';
    else
    {
        sum=0;
        ll Min= *std::min_element(v.begin(), v.end());
        for (int i = 0; i < n; ++i)
        {
            if(v[i]!=Min)
                sum+=(v[i]-Min);
        }
        if(sum>=s)
            cout<<Min<<'\n';
        else
        {
            s-=sum;
            cout<<(ll)(Min-ceil((ld)s/n))<<'\n';
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
