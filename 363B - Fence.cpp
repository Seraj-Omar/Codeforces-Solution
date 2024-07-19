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
#define loop(from,to)   for(ll i=from;i<to;i++)
#define loopr(from,to)   for(ll i=from;i>=to;--i)
#define loop2(from2,to2)   for(ll j=from2;j<to2;j++)
#define loop3(from3,to3)   for(ll k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"Yes\n":"No\n");
#define endd    '\n'
#define SEEYAH    return;
#define BYE       return 0;
using namespace std;
void solve()
{
    ll n,k;cin>>n>>k;
    ve(ll)v(n+1);
    loop(1,n+1)
    {
        cin>>v[i];
        v[i]+=v[i-1];
    }

    if(n==1||n==k)
    {
        cout<<1<<endd;
        SEEYAH
    }
    ll Min=LONG_LONG_MAX,index=1;
    loop(1,n-k+2)
    {
        if(Min>v[i+k-1]-v[i-1])
        {
            Min = v[i + k - 1] - v[i - 1];
            index = i;
        }
    }
    cout<<index<<endd;
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
