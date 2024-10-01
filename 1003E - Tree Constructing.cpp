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

vector<ll>primes(1e5+1);


void solve()
{
    ll n,d,k;cin>>n>>d>>k;
    if(n-1<d||(n>=3&&k==1))
    {
        cout<<"NO"<<'\n';
        return;
    }

    deque<pair<ll,pair<ll,ll>>>v;
    vector<pair<ll,ll>>ans;

    ll nd=d+1;
    for (int i = 1; i <=nd/2 ; ++i)
    {
        v.push_back({i,{i-1,((i==1)?k-1:k-2)}});
        v.push_back({nd-i+1,{i-1,((i==nd)?k-1:k-2)}});

        ans.push_back({i,i+1});
        if(nd-i+1!=nd)
            ans.push_back({nd-i+1,nd-i+2});
    }

    if(nd%2)
    {
        v.push_back({nd/2+1,{nd/2,k-2}});
        ans.push_back({nd/2+1,nd/2+2});
    }

    if(nd==n)
    {
        cout<<"YES"<<'\n';
        for(auto i:ans)
            cout<<i.first<<' '<<i.second<<'\n';
        return;
    }

    while(!v.empty())
    {
        auto& node=v.front();

        if(!node.second.first||!node.second.second)
        {
            v.pop_front();
            continue;
        }

        node.second.second--;
        nd++;

        v.push_back({nd,{node.second.first-1,k-1}});
        ans.push_back({node.first,nd});
        if(nd==n)
            break;
    }

    if(nd!=n)
        cout<<"NO"<<'\n';
    else
    {
        cout<<"YES"<<'\n';
        for(auto j:ans)
            cout<<j.first<<' '<<j.second<<'\n';
    }
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cout<<fixed<<setprecision(15);
    ll t = 1;
//    cin>>t;
    while (t--) { solve(); }
    return 0;
}
