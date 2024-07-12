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
#define pi  pair<ll,ll>
#define vp  vector<pi>
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
    ll n, m, k;cin >> n >> m >> k;
    string s; cin >> s;
    ll p1 = m - 1, p2 = 0, p3 = 0;

    for(char i:s)
    {
        if (i == 'L')
            p1 = m;
        else if (i == 'W')
        {
            if (p1 <= 0)
                p2++;
        }
        else
        {
            if (p1 <= 0)
                p3++;
        }
        p1--;
    }
    if (p2 > k)
        p3++;
    is(p3==0)
    SEEYAH
}
int main()
{
    SerajOmar
    ll t=1;
    cin>>t;
    while (t--){solve();}
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/