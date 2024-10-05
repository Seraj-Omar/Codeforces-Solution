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

vector<ll>divs(1e6+1),primes;
void solve()
{
    ll n;cin>>n;

    vector<ll>product(31,1);

    for(auto i:primes)
    {
        ll c=0;
        while(n%i==0)
        {
            n/=i;
            product[c++]*=i;
        }
    }
//    cout<<n<<' ';
    if(n>1)
        product[0]*=n;//the biggest product
    ll ans=0;
    for(auto i:product)
    {
        if(i==1)
            break;
        ans+=i;
    }
    cout<<ans<<'\n';
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(15);
    for (int i = 2; i <= 1e6; ++i)//this will give us all prime numbers 1-1e6 the place for this is before calling the solve function
    {
        if(divs[i]==0)//then it's a prime number
        {
            divs[i]=i;
            primes.push_back(i);
            for (int j = i; j <= 1e6; j += i)
                divs[j] = i;
        }
    }
    ll t = 1;
    cin>>t;
    while (t--) { solve(); }
    return 0;
}