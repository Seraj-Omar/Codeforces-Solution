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
void solve()
{
    ll n,m;char c;
    cin>>n>>m>>c;

    char v[n][m];
    loop(0,n)
    {
        loop2(0,m)
        {
            cin>>v[i][j];
        }
    }
    set<char>s;
    loop(0,n)
    {
        loop2(0,m)
        {
            if (v[i][j]==c)
            {
                if(i>0&&v[i-1][j]!=c&&v[i-1][j]!='.'&&s.find(v[i-1][j])==s.end())
                    s.insert(v[i-1][j]);

                if(i<n-1&&v[i+1][j]!=c&&v[i+1][j]!='.'&&s.find(v[i+1][j])==s.end())
                    s.insert(v[i+1][j]);

                if(j>0&&v[i][j-1]!=c&&v[i][j-1]!='.'&&s.find(v[i][j-1])==s.end())
                    s.insert(v[i][j-1]);

                if(j<m-1&&v[i][j+1]!=c&&v[i][j+1]!='.'&&s.find(v[i][j+1])==s.end())
                    s.insert(v[i][j+1]);
            }
        }
    }
    cout<<s.size()<<endd;
    SEEYAH
}
int main()
{
    SerajOmar
    ll t=1;
//    cin>>t;
    while (t--){solve();}
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
