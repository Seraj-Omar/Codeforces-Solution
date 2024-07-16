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
#define pi(ll,int)  pair<ll,int>
#define vp(ll,int)  vector<pi(ll,int)>
#define pb(n)  push_back(n)
#define yes  cout<<"YES\n";
#define no  cout<<"NO\n";
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"Yes\n":"No\n");
#define endd    '\n'
#define SEEYAH    return;
#define BYE       return 0;
using namespace std;
ll n,m;
char c;
bool done=false;
vt(v,51,51,char);
vt(visited,51,51,bool);
void dfs(ll i,ll j,ll previ,ll prevj)
{
    if(i<1||i>n||j<1||j>m||v[i][j]!=c)
        SEEYAH

    if(visited[i][j])
    {
        done=true;
        SEEYAH
    }

    visited[i][j]=true;
    if(i+1!=previ)
        dfs(i+1,j,i,j);
    if(i-1!=previ)
        dfs(i-1,j,i,j);
    if(j+1!=prevj)
        dfs(i,j+1,i,j);
    if(j-1!=prevj)
        dfs(i,j-1,i,j);
    SEEYAH
}
void solve()
{
    cin>>n>>m;
    loop(1,n+1)
    {
        loop2(1,m+1)
        {
            cin>>v[i][j];
        }
    }
    loop(1,n+1)
    {
        loop2(1,m+1)
        {
            if (!visited[i][j])
            {
                c=v[i][j];
                dfs(i,j,-1,-1);
            }
            if(done)break;
        }
        if(done)break;
    }
    is(done)
    SEEYAH
}
int main()
{
    SerajOmar
    ll t=1;
//   cin>>t;
    while (t--){solve();}
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/