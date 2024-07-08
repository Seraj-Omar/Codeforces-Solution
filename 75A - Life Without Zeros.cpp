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
#define yes  cout<<"YES\n";
#define no  cout<<"NO\n";
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define end    '\n'
#define SEEYAH    return;
using namespace std;
void solve()
{
    ll a,b;cin>>a>>b;
    ll c=a+b;

    string sa=to_string(a),sb= to_string(b),sc= to_string(c);

    string aa, bb, cc;
    loop(0,sa.size())
    {
        if (sa[i] != '0')
            aa += sa[i];
    }

    loop(0,sb.size())
    {
        if (sb[i] != '0')
            bb += sb[i];
    }

    loop(0,sc.size())
    {
        if (sc[i] != '0')
            cc += sc[i];
    }

    ll n1= stoi(aa),n2= stoi(bb),n3= stoi(cc);
    is(n1+n2==n3)
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
