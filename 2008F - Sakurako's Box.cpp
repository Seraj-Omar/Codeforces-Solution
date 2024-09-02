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
//if characters in the even positions are the same,
// if characters in the odd positions are the same,
// and the length of the string is even.
ll power(ll a,ll b)
{
    // a^b=(a^(b/2))^2
    if(!b)
        return 1;
    if(b==1)
        return a;

    ll answer;
    answer= power(a,b/2);
    answer*=answer;
    answer%=mod; //if he asked for the answer to be mod a number usually 1e9+7
    if(b%2)
    {
        answer*=a;
        answer%=mod;
    }
    return answer;
}
void solve()
{
    ll n,sum=0;cin>>n;
    vector<ll>v(n);
    for(auto& i:v)
    {
        cin>>i;
        sum+=i;
    }
    ll var=0;
    for (int i = 0; i < n; ++i)
    {
        ll x=((((sum-v[i])%mod))*(v[i]%mod)+mod)%mod;
        ll y=x%mod+var%mod;
        var=y;
    }
    ll a=((n%mod)*((n-1)%mod))%mod;
    ll b= power(a,mod-2)%mod;

    cout<<((var%mod)*(b%mod))%mod<<'\n';
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
