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
#define vt(v,n,m,int)   vector<vector<int>> v(n, vector<int>(m));
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
    vi v(n);
    map<ll,ll>map;//using map so we can store the indices for each element
    loop(0,n)
    {
        cin>>v[i];
        map[v[i]]=i;
    }
    ll Max=0;
    for(auto i:map)
    {
        for(auto j:map)
        {
            if(gcd(i.first,j.first)==1)
                Max=max(Max,i.second+j.second+2);
        }
    }
    if(Max)
        cout<<Max<<endl;
    else
        cout<<-1<<endl;

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
