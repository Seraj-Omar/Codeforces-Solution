#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define is(x) cout<<((x)?"YES\n":"NO\n");
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
    for(auto& i:v) {
        cin >> i;
        i--;
    }
    string s;cin>>s;

    vector<ll>answer(n,0);
    vector<bool>vis(n,false);
    for (int i = 0; i < n; ++i)
    {
        if(!vis[i])
        {
            vector<ll>a;
            ll black=0,j=i;

            while(!vis[j])
            {
                vis[j]=true;
                a.push_back(j);
                
                if(s[j]=='0')
                    black++;
                j=v[j];
            }
            for(auto j:a)
                answer[j]=black;
        }
    }
    for(auto i:answer)
        cout<<i<<' ';
    cout<<'\n';
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