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
void solve()
{
    ll n;cin>>n;
    ve(ll) v(n);
    input(v)

    if(std::is_sorted(v.begin(), v.end()))
    {
        cout<<"yes"<<endd<<"1 1"<<endd;
        SEEYAH
    }

    ll left,right;
    bool found=false;
    loop(0,n-1)
    {
        if(v[i]>v[i+1]&&!found) {
            left = i;
            found=true;
        }

        if(v[i]<v[i+1]&&found) {
            right = i;
            break;
        }

        if(i==n-2&&v[i]>v[i+1])
            right=n-1;
    }

    reverse(v.begin()+left, std::find(v.begin(), v.end(),v[right])+1);

    if (std::is_sorted(v.begin(), v.end()))
    {
        cout<<"yes"<<endd;
        cout<<left+1<<' '<<right+1<<endd;
    }
    else
        cout<<"no"<<endd;

    SEEYAH
}
int main()
{
    SerajOmar
    ll t=1;
//    cin>>t;
    while (t--){solve();}
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
