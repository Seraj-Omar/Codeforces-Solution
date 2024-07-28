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
#define vi vector<int>
#define vii vector<vector<int>>
#define vb vector<bool>
#define vbb vector<vector<bool>>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define vc vector<char>
#define vcc vector<vector<char>>
#define vp vector<pair<int,int>>
#define vpp vector<vector<pair<int,int>>>
#define vs vector<string>
#define si set<int>
#define pb push_back
#define vt(v,n,m,int)   vector<vector<int>> v(n, vector<int>(m));
#define vti(v,n,m,int,initial)   vector<vector<int>> v(n, vector<int>(m,initial));
#define pi  pair<int,int>
#define sz(s) s.size()
#define PI 3.14159265359
#define yes  cout<<"YES\n";
#define no  cout<<"NO\n";
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define allr(v)  v.rbegin(),v.rend()
#define is(x) cout<<((x)?"Yes\n":"No\n");
#define endd    '\n'
#define SEEYAH    return;
#define BYE       return 0;
using namespace std;
vp directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
void solve()
{
    string s;int m,x;
    cin>>s>>m;

    vi freq(2*1e5,0);
    while(m--)
    {
        cin>>x;
        freq[x]++;
        freq[sz(s)-x+1]--;
    }
    loop(1, sz(s)/2+1)
    {
        freq[i]+=freq[i-1];

        if (freq[i]%2)
            swap(s[i-1],s[sz(s)-i]);
    }
    cout<<s<<endd;
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(12);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    BYE
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
/*
    i>=0&&j>=0&&i<n&&j<m;
    (n * (n + 1)) even 1-n
    pow(((n + 1) / 2),2) odd 1-n
    n(n+1)/2 sum 1-n
 */