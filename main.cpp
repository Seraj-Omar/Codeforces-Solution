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
    ll x,y,k;cin>>x>>y>>k;

    ll add=y-(x%y);
    if(add==k)
    {
        x+=k;
        while(x%y==0)
            x/=y;
        cout<<x<<endl;
        STFU
    }
    else if(k<add)
    {
        cout<<x+k<<endl;
        STFU
    }
    while(k>0&&x>1)
    {
        if(k>=add)
        {
            k-=add;
            x+=add;
            while(x%y==0)
                x/=y;

            add=y-(x%y);
        }
        else
        {
            cout<<x+k<<endl;
            STFU
        }
    }

    if (k != 0) {
//        cout << "k = " << k << endl;
        cout << k % (y - 1) + 1 << endl;
    } else
        cout << x << endl;
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