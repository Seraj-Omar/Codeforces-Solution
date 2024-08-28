#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from,to)   for(int j=from;j<to;j++)
#define loop3(from,to)   for(int k=from;k<to;k++)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define is(x) cout<<((x)?"YES\n":"NO\n");
using namespace std;

//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;

//template<typename T>
//using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered set

//template<typename T>
//using o_mset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered multiset

vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
const ll mod=1e9+7;
//i>=0&&j>=0&&i<n&&j<m; valid
// can be used for (LCM , GCD , MIN , MAX , | , &)
ll n,k;
vector<ll>a;
vector<ll>b;
bool valid(ll mid)
{
    ll sum=0;
    loop(0,n)
    {
        if(mid * a[i] > b[i])
            sum+=(mid * a[i] - b[i]);
    }
    return sum<=k;
}
void solve()
{
    cin>>n>>k;
    a.resize(n);
    b.resize(n);
    for(auto& i:a)cin>>i;
    for(auto& i:b)cin>>i;

    ll l=0,r=1e6,mid;
    while(r-l>1)
    {
        mid=(r+l)/2;
        if(valid(mid))
            l=mid;
        else
            r=mid;
    }
    cout<<l<<'\n';
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
