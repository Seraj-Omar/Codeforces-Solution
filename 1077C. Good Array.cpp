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
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define STFU    return;
using namespace std;
void solve()
{
    ll n;cin>>n;
    vi v(n);
    ll sum=0;
    for(ll& i:v)
    {
        cin>>i;
        sum+=i;
    }
    vi v2(all(v));
    std::sort(v2.begin(), v2.end());
    vi nice;
    loop(0,n)
    {
        if(v[i]!=v2[n-1])
        {
            if (v2[n - 1] == sum - v[i] - v2[n - 1])
                nice.push_back(i + 1);
        }
        else
        {
            if (v2[n - 2] == sum - v[i] - v2[n - 2])
                nice.push_back(i + 1);
        }
    }
    cout<<nice.size()<<endl;
    for(auto i:nice)
        cout<<i<<" ";
    STFU
}
int main()
{
    SerajOmar
    OneTest
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
