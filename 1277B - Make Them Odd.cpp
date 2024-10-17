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
    deque<ll>d;
    map<ll,bool>mp;
    for (int i = 0; i < n; ++i)
    {
        ll x;cin>>x;
        if(!(x%2)&&!mp.count(x))
        {
            d.push_back(x);
            mp[x]=true;
        }
    }
    std::sort(d.rbegin(), d.rend());
    ll ans=0;
    while(!d.empty())
    {
        d.front()/=2;
        ans++;
        if(mp.count(d.front())||d.front()%2)
            d.pop_front();
    }
    cout<<ans<<'\n';
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
