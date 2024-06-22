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
#define pi  pair<ll,ll>
#define vp  vector<pi>
#define cy  cout<<"YES"<<endl;
#define cn  cout<<"NO"<<endl;
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(v)  v.begin(),v.end()
#define STFU    return;
using namespace std;
void solve()
{
    ll n;cin>>n;
    vi v(n);
    map<ll,ll>frequancy;
    set<ll>s;
    loop(0,n)
    {
        cin>>v[i];
        frequancy[v[i]]++;
        s.insert(v[i]);
    }
    if(n==1)
        cout<<0<<endl;
    else if(n==2||n==3)
        cout<<1<<endl;
    else
    {
        ll Max=0;
        for(auto i:frequancy)
            Max=max(Max,i.second);

        ll t1=s.size(),t2=Max;
        if(t1==t2)
            cout<<t1-1<<endl;
        else
            cout<<min(t1,t2)<<endl;
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