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

void solve()
{
    ll l,r;cin>>l>>r;
    if(l==r&&l%2)
    {
        vector<ll>div;
        for (int i = 2; i*i <=l ; ++i)
        {
            if(l%i==0)
            {
                div.push_back(i);
                if(i!=l/i)
                    div.push_back(l/i);
            }
        }
        std::sort(div.begin(), div.end());
        for(auto i:div)
        {
            if(i%2)
            {
                cout << i << ' ' << l - i << '\n';
                return;
            }
        }
        cout<<-1<<'\n';
    }
    else
    {
        l += l % 2;
        if (l == 2)
            l <<= 1;

        if (l <= r)
            cout << l / 2 << ' ' << l / 2 << '\n';
        else
            cout << -1 << '\n';
    }
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
