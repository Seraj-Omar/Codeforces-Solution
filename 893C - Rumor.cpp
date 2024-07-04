/*
 بسم الله الرحمن الرحيم

 Code by SerajOmar :)


     ███████ ███████ ██████   █████      ██████
     ██      ██      ██   ██ ██   ██       ██
     ███████ █████   ██████  ███████       ██
          ██ ██      ██   ██ ██   ██ ██    ██
     ███████ ███████ ██   ██ ██   ██ ████████
                                    ⠀    -HIM-
    LETS GOOOOO
 */
#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define vi(ll)   vector<ll>
#define vv(ll)  vector<vector<ll>>
#define vt(v,n,m,int)   vector<vector<int>> v(n, vector<int>(m));
#define pi  pair<ll,ll>
#define vp  vector<pi>
#define yes  cout<<"YES\n";
#define no  cout<<"NO\n";
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define SEEYAH    return;
using namespace std;
ll Min;
vv(ll) v;
vi(ll) coins;
vi(bool) visited;
void dfs(ll i)
{
    visited[i]= true;
    Min=min(Min,coins[i]);
    for(auto j:v[i])
    {
        if(visited[j])
            continue;
        dfs(j);
    }
}
void solve()
{
    ll n,m;cin>>n>>m;
    v.resize(n+1); coins.resize(n+1); visited.resize(n+1);
    loop(1,n+1)
        cin>>coins[i];

    ll x,y;
    loop(1,m+1)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ll sum=0;
    loop(1,n+1)
    {
        if(visited[i])
            continue;

        Min=LONG_LONG_MAX;
        dfs(i);
        sum += Min;
    }
    cout<<sum<<endl;
    SEEYAH
}
int main()
{
    SerajOmar
    ll t=1;
//    cin>>t;
    while(t--){solve();}
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
