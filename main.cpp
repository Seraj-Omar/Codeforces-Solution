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
vv(ll)v;
ve(ll)colour;
ll n,count1=0,count2=0,answer=0;
ll dfs(ll i,ll previous)
{
    ll sum=0;
    if(colour[i]==1)
        sum++;
    else if(colour[i]==2)
        sum--;
    for(auto j:v[i])
    {
        if (j == previous)
            continue;
        sum += dfs(j, i);
    }
//    cout<<"sum "<<i<<" = "<<sum<<endd;
    if(sum==count1||sum==count2)
        answer++;

    return sum;
}
void solve()
{
    cin>>n;
    v.resize(n+1);
    colour.resize(n+1);
    loop(1,n+1)
    {
        cin >> colour[i];

        if(colour[i]==1)
            count1++;
        else if(colour[i]==2)
            count2--;
    }

    ll x,y;
    loop(1,n)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }

    dfs(1,-1);
    cout<<answer<<endd;
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