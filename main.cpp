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
void solve()
{
    ll n,k;cin>>n>>k;
    vi v(n);
    for(ll& i:v)
        cin>>i;
    set<ll>s(v.begin(),v.end());
    vi unique(s.begin(),s.end());
    if(s.size()>k)
    {
        cout << "-1"<<endl;
        STFU
    }

    ll counter=0;
    while (unique.size()!=k)
    {
        unique.push_back(1);
    }
    cout<<n*k<<endl;
    for (int i = 0; i < n; ++i)
        for(ll j:unique)
            cout<<j<<" ";
    cout<<endl;
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