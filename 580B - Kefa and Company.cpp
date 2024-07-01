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
void solve()
{
    ll n,d;cin>>n>>d;
    vp v(n);
    loop(0,n)
        cin>>v[i].first>>v[i].second;

    std::sort(v.begin(), v.end());
    ll sum=0,Max=0,p1=0,p2=0;
    while(p1<=p2&&p2<n)
    {
        if(v[p2].first-v[p1].first<d)
        {
            sum+=v[p2].second;
            p2++;
        }
        else
        {
            sum-=v[p1].second;
            p1++;
        }
        Max=max(Max,sum);
    }
    cout<<Max<<endl;
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
