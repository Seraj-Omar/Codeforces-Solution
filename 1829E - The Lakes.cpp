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
#define yes  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define SEEYAH    return;
using namespace std;
ll n ,m;
ll ans = -1 ,sum=0;
int v[1000][1000];
bool vis[1000][1000];
void dfs(ll i,ll j)
{
    if (i<0||i>n-1||j<0||j>m-1||v[i][j]==0||vis[i][j])
        return;

    vis[i][j]=true;
    sum+=v[i][j];

    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i+1,j);
    dfs(i-1,j);
}
void solve()
{
    cin>>n>>m;

    loop(0,n)
    {
        loop2(0,m)
        {
            cin>>v[i][j];
            vis[i][j]= false;
        }
    }

    ll Max=0;
    loop(0,n)
    {
        loop2(0,m)
        {
            if(v[i][j]!=0&&vis[i][j]==0)
            {
                sum=0;
                dfs(i,j);
                Max = max(Max, sum);
            }
        }
    }
    cout<<Max<<endl;
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
