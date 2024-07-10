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
#define pb(n)  push_back(n)
#define yes  cout<<"YES\n";
#define no  cout<<"NO\n";
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define end    '\n'
#define SEEYAH    return;
using namespace std;
ll n,m,restaurants =0;
vv(ll) v;
ve(ll) cats;
void dfs(ll i,ll previous,ll counter)
{
    if(cats[i])
        counter++;
    else
        counter=0;

    if(counter>m)
        SEEYAH

    if(v[i].size()==1&&i!=1)
        restaurants ++;

    for(auto j:v[i])
    {
        if(j==previous)continue;

        dfs(j,i,counter);
    }
}
void solve()
{
    cin>>n>>m;
    v.resize(n+1);cats.resize(n+1);
    loop(1,n+1)cin>>cats[i];

    loop(1,n)
    {
        ll x,y;cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(1,-1,0);
    cout<<restaurants<<end;
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
