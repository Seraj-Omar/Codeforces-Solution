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
vv(ll) v;
string s;
ll answer=0;
int dfs(ll i)
{
    int sum=0;
    if(s[i]=='B')
        sum++;
    else
        sum--;

    for(auto j:v[i])
        sum+=dfs(j);

    if (sum==0)
        answer++;
    return sum;
}
void solve()
{
    ll n;cin>>n;
    v.clear();
    v.resize(n+1);
    answer=0;

    ll x;
    loop(2,n+1)
    {
        cin>>x;
        v[x].push_back(i);
    }
    cin>>s;
    s='0'+s;//to make it a non-zero based index string start from one or we can just put s[i-1] in line 39

    dfs(1);
    cout<<answer<<'\n';
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
