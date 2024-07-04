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
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define SEEYAH    return;
using namespace std;
void solve()
{
    ll n,k;cin>>n>>k;
    vi(ll) v(n);
    map<ll,ll>map;
    for(ll& i:v)
    {
        cin>>i;
        map[i]++;
    }
    vi(ll) valid;
    for(auto& i:map){
        if(i.second>=k)
            valid.push_back(i.first);
    }

    if(valid.empty()){
        cout<<"-1\n";
        SEEYAH
    }

    ll Max=-1,st=valid[0],l,r;
    loop(1,valid.size())
    {
        if (valid[i]-1 != valid[i - 1]) {
            if (valid[i - 1] - st > Max)
            {
                Max = valid[i - 1] - st;
                l = st, r = valid[i - 1];
            }
            st = valid[i];
        }
    }
    if(valid[valid.size()-1]-st>Max)
    {
        l=st;
        r=valid[valid.size()-1];
    }
    cout<<l<<' '<<r<<'\n';
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
