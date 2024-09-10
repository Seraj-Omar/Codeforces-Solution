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
//vector<vector<ll>> vec(n,vector<int>(m))//2D vector
vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
const ll mod=1e9+7;
const ll inf=2e18+1;

void solve()
{
    ll n;
    cin>>n;
    vector<string>names(n);
    for(string& i:names)
        cin>>i;

    vector<vector<ll>>v(26);
    vector<ll>cnt(26);
    for (int i = 1; i < n; ++i)
    {
        string f=names[i-1];
        string s=names[i];
        ll size=min(f.size(),s.size());
        char x='?',y='?';
        for (int j = 0; j < size; ++j)
        {
            if(f[j]!=s[j])
            {
                x=f[j];y=s[j];
                break;
            }
        }
        if(x=='?')
        {
            if(f.size()>s.size())
            {
                cout<<"Impossible"<<'\n';
                return;
            }
            continue;
        }
        v[x-'a'].push_back(y-'a');
        cnt[y-'a']++;
    }

    queue<ll>q;
    for (int i = 0; i < 26; ++i)
    {
        if(!cnt[i])
            q.push(i);
    }
    string answer="";
    while(!q.empty())
    {
        ll i=q.front();
        q.pop();
        answer+= (i+'a');
        for(auto j:v[i])
        {
            if(!(--cnt[j]))
                q.push(j);
        }
    }
    cout<<((answer.size()==26)?answer:"Impossible")<<'\n';
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(15);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    return 0;
}
