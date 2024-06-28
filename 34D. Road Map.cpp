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
#define OneTest     solve();
#define MultipleTests     int t;cin>>t;while(t--){solve();}
#define ll  long long
#define v(ll)   vector<ll>
#define vv(ll)  vector<vector<ll>>
#define vt(v,n,m,int)   vector<vector<int>> v(n, vector<int>(m));
#define pi  pair<ll,ll>
#define vp  vector<pi>
#define yes  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define STFU    return;
using namespace std;
vv(ll) v;
v(ll) rep;
void dfs(ll i,ll previous)
{
    for(ll j:v[i])
    {
        if(j==previous)
            continue;

        rep[j]=i;
        dfs(j,i);
    }
}
//  3 2 3
//  2 2
//  2 3

//6 2 4
//6 1 2 4 2
//6 4 1 4 2
void solve()
{
    ll n,r1,r2,p;cin>>n>>r1>>r2;

    v.resize(n+1);
    rep.resize(n+1);

    loop(1,n+1)
    {
        if(i==r1)
            continue;

        cin>>p;
        v[i].push_back(p);
        v[p].push_back(i);
    }
    dfs(r2,-1);
    loop(1,n+1)
    {
        if(i==r2)
            continue;
        cout<<rep[i]<<' ';
    }
    STFU
}
int main()
{
    SerajOmar
    OneTest
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
