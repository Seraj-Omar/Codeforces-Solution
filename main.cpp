/*
 بسم الله الرحمن الرحيم

 Code by SerajOmar :)


     ███████ ███████ ██████   █████      ██████
     ██      ██      ██   ██ ██   ██       ██
     ███████ █████   ██████  ███████       ██
          ██ ██      ██   ██ ██   ██ ██    ██
     ███████ ███████ ██   ██ ██   ██ ████████
                                        -BATMAN-

    i am the night...i am vengeance...I AM BATMAN

    LETS GOOOOO
 */
#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define ve(ll)   vector<ll>
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
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define endl    cout<<'\n'
#define SEEYAH    return;
using namespace std;
vv(ll) v;
ve(ll) cost;
ve(bool) visited;
ll dfs(ll i)
{
    if(visited[i]||v[i].empty())
        return cost[i];
    visited[i]= true;

    ll price=0;
    for(ll j:v[i])
        price+=dfs(j);

    cost[i]=min(cost[i],price);
    return cost[i];
}
void solve()
{
    ll n,k;cin>>n>>k;
    v.clear();cost.clear();visited.clear();
    v.resize(n+1);cost.resize(n+1);visited.resize(n+1);

    loop(1,n+1)
        cin>>cost[i];

    ll p;
    loop(1,k+1)
    {
        cin>>p;
        cost[p]=0;
    }
    ll m,e;
    loop(1,n+1)
    {
        cin>>m;
        loop2(0,m)
        {
            cin>>e;
            v[i].push_back(e);
        }
    }

    loop(1,n+1)
        dfs(i);

    loop(1,n+1)
        cout<<cost[i]<<' ';
    endl;
    SEEYAH
}
int main()
{
    SerajOmar
    ll t=1;
    cin>>t;
    while(t--){solve();}
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/