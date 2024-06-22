/*
 بسم الله الرحمن الرحيم
 Code by SerajOmar :)

     ███████ ███████ ██████   █████      ██████
     ██      ██      ██   ██ ██   ██       ██
     ███████ █████   ██████  ███████       ██
          ██ ██      ██   ██ ██   ██ ██    ██
     ███████ ███████ ██   ██ ██   ██ ████████
                                    ⠀    -HIM-
⠀GET THERE OR DIE TRYING.⠀⠀⠀⠀⠀⠀⠀⠀⠀
 */
#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define OneTest     solve();
#define MultipleTests     int t;cin>>t;while(t--){solve();}
#define ll  long long
#define vi   vector<ll>
#define pi  pair<ll,ll>
#define vp  vector<pi>
#define cy  cout<<"YES"<<endl;
#define cn  cout<<"NO"<<endl;
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define STFU    return;
using namespace std;
ll sum(ll n)
{
    return n*(n+1)/2;
}
void solve()
{
    ll n,a,b;cin>>n>>a>>b;
    if(a>=b)
        cout<<n*a<<endl;
    else
    {
        ll k=b-a;
        if(k>n)
            k=n;
        ll lastModified=b-k+1,profit=sum(b)-sum(lastModified-1);
        profit+=(n-k)*a;
        cout<<profit<<endl;
    }
    STFU
}
int main()
{
    SerajOmar
    MultipleTests
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
