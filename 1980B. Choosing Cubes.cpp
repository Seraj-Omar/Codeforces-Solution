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
    ll n, f, k;
    cin >> n >> f >> k;

    vi v(n);
    for (auto &i: v)
        cin >> i;

    ll favorite = v[f - 1];
    sort(v.begin(), v.end(), greater<ll>());

    bool removed = false;
    for (int i = 0; i < k; ++i){
        if (v[i] == favorite)
        {
            removed = true;
            break;
        }
    }

    bool maybe = false;
    if (removed)
    {
        for (int i = k; i < n; ++i) {
            if (v[i] == favorite)
            {
                maybe = true;
                break;
            }
        }
    }

    if (maybe)
        cout << "MAYBE" << endl;

    else if (removed)
        yes

    else
        no

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