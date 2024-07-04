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
ll n;
vv(ll) v;
vi(ll) leaves(n+1,0);
ll dfs(ll i,ll previous)
{
    bool leaf=true;
    for(ll j:v[i])
    {
        if(j==previous)
            continue;
        leaf=false;
       leaves[i]+= dfs(j,i);
    }
    leaves[i]+=leaf;
//    cout<<"leaves "<<i<<" = "<< leaves[i]<<" "<<endl;
    return leaves[i];
}
void solve()
{
    cin>>n;
    v.clear();v.resize(n+1);
    leaves.clear();leaves.resize(n+1);
    int a,b;
    loop(1,n)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,-1);
    int q,x,y;cin>>q;
    loop(0,q)
    {
        cin>>x>>y;
        cout<<leaves[x]*leaves[y]<<'\n';
    }
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