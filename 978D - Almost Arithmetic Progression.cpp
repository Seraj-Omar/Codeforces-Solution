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
//vector<vector<ll>> v(n,vector<int>(m))//2D vector
vector<pair<ll,ll>> di = {{1,1},{-1,-1},{0,0}};
const ll mod=1e9+7;
const ll inf=2e18+1;
void solve()
{
    ll n;cin>>n;
    vector<ll>v(n);
    for(auto& i:v)
        cin>>i;

    ll mx=inf;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            ll counter= abs(di[i].first)+ abs(di[j].first);
            ll x=v[0]+di[i].first;
            ll y=v[1]+di[j].second;
            ll difference=y-x,prev=y;

            for (int k = 2; k <n ; ++k)
            {
                ll newv=prev+difference;
                if(abs(newv-v[k])==0)
                {
                    prev=newv;
                    continue;
                }
                if(abs(newv-v[k])==1)
                    counter++;
                else
                    counter=inf;
                prev=newv;
            }
            mx= min(mx,counter);
        }
    }
    cout<<((mx==inf)?-1:mx)<<'\n';
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(15);
//    for (int i = 1; i <= 1e4; ++i) {
//        exist[i * i * i] = true;
//    }
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    return 0;
}
