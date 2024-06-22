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
    ll n;cin>>n;
    vi v(n);
    ll sum=0;
    for(ll& i:v) {
        cin >> i;
        sum+=i;
    }

    if(sum%3==0)
        cout<<0<<endl;
    else if(sum%3==2)
        cout<<1<<endl;
    else
    {
        bool f=false;
        loop(0, n)
        {
            if ((sum - v[i]) % 3 == 0) {
                f=true;
                cout << 1 << endl;
                break;
            }
        }
        if(!f&&sum%3==1) {
            cout << 2 << endl;
            f=false;
        }
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