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
#define vi   vector<ll>
#define vt(v,n,m)   vector<vector<int>> v(n, vector<int>(m));
#define pi  pair<ll,ll>
#define vp  vector<pi>
#define yes  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(v)  v.begin(),v.end()
#define STFU    return;
using namespace std;
void solve()
{
    ll n;cin>>n;

    ll x=2,Max=0,current;
    for (int i = x; i <= n; i+=x)
        Max+=i;
    
    for (int i = 3; i <=n ; ++i)
    {
        current=0;
        for (int j = i; j <= n; j+=i) {
            current+=j;
        }
        if(current>Max)
        {
            Max = current;
            x=i;
        }
    }
    cout<<x<<endl;
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
