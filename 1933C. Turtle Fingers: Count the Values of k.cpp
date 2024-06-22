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
    ll a,b,l;cin>>a>>b>>l;

    vector<ll>divisors;
    for (int i = 1; i <= sqrt(l); ++i) {
        if(l%i==0)
        {
            if(l/i==i)
                divisors.push_back(i);
            else
            {
                divisors.push_back(i);
                divisors.push_back(l/i);
            }
        }
    }

    vector<ll>x;
    ll counter=0,n=0;
    while(n<=1e6)
    {
        n=pow(a,counter);
        x.push_back(n);
        counter++;
    }

    vector<ll>y;
    counter=0;n=0;
    while(n<=1e6)
    {
        n=pow(b,counter);
        y.push_back(n);
        counter++;
    }

    ll count=0;
    for (ll i = 0; i < divisors.size(); ++i)
    {
        bool found=false;
        for (ll j = 0; j < x.size(); ++j)
        {
            for (ll k = 0; k < y.size(); ++k)
            {
                if(divisors[i]*x[j]*y[k]==l)
                {
                    count++;
                    found=true;
                    break;
                }
            }
            if(found)
                break;
        }
    }
    cout<<count<<endl;
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
