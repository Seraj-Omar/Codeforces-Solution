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

vector<ll>index;
bool comp(int a, int b)
{
    return index[a] < index[b];
}
void solve()
{
    ll n;cin>>n;
    vector<vector<ll>>v(n+1);
    for (int i = 0; i < n - 1; ++i)
    {
        ll x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    index.resize(n+1);
    vector<ll>a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        index[a[i]]=i;
    }

    for (int i = 1; i <=n ; ++i) {
        std::sort(v[i].begin(), v[i].end(),comp);
    }

    queue<ll>q;
    vector<bool>vis(n+1);

    ll i=0;
    q.push(1);
    while(!q.empty())
    {
        ll node=q.front();
        q.pop();
        vis[node]=true;
        if(a[i]!=node)
        {
            cout<<"No"<<"\n";
            return;
        }
        for(auto j:v[node])
        {
            if(!vis[j])
                q.push(j);
        }
        i++;
    }
    cout<<"Yes"<<'\n';
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
