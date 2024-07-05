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
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define endl    cout<<'\n';
#define SEEYAH    return;
using namespace std;

int n,m,k;
vt(v,501,501,char) ;
vt(visited,501,501,bool)

void dfs(int i,int j)
{
    if(i==0||j==0||i>n||j>m||visited[i][j]||v[i][j]=='#')
        SEEYAH

    visited[i][j]=true;
    dfs(i+1,j);
    dfs(i,j+1);
    dfs(i-1,j);
    dfs(i,j-1);
    if(k!=0)
    {
        v[i][j]='X';
        k--;
    }
    SEEYAH
}

void solve()
{
    cin>>n>>m>>k;
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
            if(v[i][j]=='.')
                dfs(i,j);
        }
    }
    loop(1,n+1)
    {
        loop2(1,m+1)
        {
            cout<<v[i][j];
        }
        endl
    }
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
