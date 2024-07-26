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
#define vti(v,n,m,int,initial)   vector<vector<int>> v(n, vector<int>(m,initial));
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
//vp(int,int) directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
ll sumE(ll n)
{
    return (n * (n + 1));
}
ll sumO(ll n)
{
    long long res=(n + 1) / 2;
    return res * res;
}
ll sum(ll n)
{
    return n*(n+1)/2;
}
void solve()
{
    ll n,r,avg;cin>>n>>r>>avg;

    ll x,y;
    vp(ll,ll)v;
    ll sum=0;
    loop(0,n)
    {
        cin>>x>>y;
        sum+=x;
        if(x<r)
            v.pb(make_pair(y,x));
    }
    if(sum/n>=avg)
    {
        cout<<0<<endd;
        SEEYAH
    }
    std::sort(v.begin(), v.end());
    ll counter=0,index=0,missing=(avg*n)-sum;
    while(missing>0&&index<v.size())
    {
        ll difference=min(r-v[index].second,missing);
        missing-=difference;
        counter+=difference*v[index].first;
        index++;
    }
    cout<<counter<<endd;
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    BYE
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/