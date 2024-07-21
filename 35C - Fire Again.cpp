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
void solve() {
    ll n, m,k;
    cin >> n >> m>>k;

    queue<pi(ll,ll)> q;
    vt(v,n+1,m+1,bool)

    ll i,j;
    while(k--)
    {
        cin>>i>>j;
        q.emplace(i,j);
        v[i][j]=true;
    }
    while (!q.empty())
    {
        i=q.front().first;
        j=q.front().second;
        q.pop();
        if(i<n && !v[i+1][j])
        {
            v[i+1][j]=true;
            q.emplace(i+1,j);
        }

        if(i>1&&!v[i-1][j])
        {
            v[i-1][j]=true;
            q.emplace(i-1,j);
        }

        if(j<m&&!v[i][j+1])
        {
            v[i][j+1]=true;
            q.emplace(i,j+1);
        }

        if(j>1&&!v[i][j-1])
        {
            v[i][j-1]=true;
            q.emplace(i,j-1);
        }
    }
    cout<<i<<' '<<j<<endd;
    SEEYAH
}
int main()
{
    SerajOmar
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
