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
    string s;cin>>s;

    map<char, ll> freq;
    for(char& i:s)
        freq[i]++;

    ll size=freq.size(),Max=0;
    map<char, ll> freq2;
    loop(0,n)
    {
        freq2[s[i]]++;
        freq[s[i]]--;

        ll size2=freq2.size();
        if(!freq[s[i]])
            size--;
        Max=max(Max,size+size2);
    }
    cout<<Max<<endl;
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