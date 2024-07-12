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
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define endd    '\n'
#define SEEYAH    return;
using namespace std;
void solve()
{
    ll n,m;cin>>n>>m;

    vp(ll,ll) v(m);

    ll a,b;
    loop(0,m)
    {
        cin>>a>>b;
        v[i].first=b;v[i].second=a;
    }
    std::sort(v.begin(), v.end(),greater());
    ll counter=0,index=0,matches=0;
    while(true)
    {
        if(n==0||(index==m-1&&v[index].second==0))
            break;

        if(v[index].second<=n&&v[index].second!=0)
        {
            matches+=(v[index].first*v[index].second);
            counter+=v[index].second;
            n-=v[index].second;
            v[index].second=0;
        }
        else if(v[index].second>n)
        {
            matches+=(v[index].first*n);
            counter+=n;
            n=0;
            v[index].second=0;
        }
        else
            index++;
    }
    cout<<matches<<endd;
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
