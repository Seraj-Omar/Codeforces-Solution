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

void solve()
{
    ll n,d,k;cin>>n>>d>>k;

    if(n-1<d||(n>=3&&k==1))
    {
        cout<<"NO\n";
        return;
    }
    deque<pair<ll,pair<ll,ll>>>g;
    vector<pair<ll,ll>>ans;
    ll nodes=d+1;
    for (int i = 1; i <=nodes/2 ; ++i)
    {
        g.push_back({i,{i-1,(i==1)?k-1:k-2}});
        ans.emplace_back(i,i+1);
        g.push_back({nodes-i+1,{i-1,(i==nodes)?k-1:k-2}});
        if((nodes-i+1)!=nodes)
            ans.emplace_back(nodes-i+1,nodes-i+2);
    }
    if(nodes%2)
    {
        g.push_back({nodes / 2 + 1, {nodes / 2, k - 2}});
        ans.emplace_back(nodes / 2 + 1,nodes / 2 + 2);
    }
    if(nodes==n)
    {
        cout<<"YES"<<'\n';
        std::sort(ans.begin(), ans.end());
        for (auto i: ans)
            cout << i.first << ' ' << i.second << '\n';
        return;
    }
    while(!g.empty())
    {
        auto& c=g.front();
        if(!c.second.second||!c.second.first) {
            g.pop_front();
            continue;
        }
        c.second.second--;
        nodes++;
        g.push_back({nodes,{c.second.first-1,k-1}});
        ans.emplace_back(c.first,nodes);
        if(nodes==n)
            break;
    }

    if(nodes!=n)
        cout<<"NO"<<'\n';
    else
    {
        cout<<"YES"<<'\n';
        for(auto i:ans)
            cout<<i.first<<' '<<i.second<<'\n';
    }
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