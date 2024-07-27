/*
 بسم الله الرحمن الرحيم

 Code by SerajOmar :)
 Solution begin at line 70

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
#define is(x) cout<<((x)?"Yes\n":"No\n");
#define endd    '\n'
#define SEEYAH    return;
#define BYE       return 0;
using namespace std;
vp directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
bool valid(ll i,ll j,ll n,ll m)
{
    return i>=0&&j>=0&&i<n&&j<m;
}
ll sumE(ll n)//sum of even numbers from 1-n
{
    return (n * (n + 1));
}
ll sumO(ll n)//sum of odd numbers from 1-n
{
    long long res=(n + 1) / 2;
    return res * res;
}
ll sum(ll n)//sum of all numbers from 1-n
{
    return n*(n+1)/2;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;

    int sum=0,target=0;
    loop(0, sz(s1))
    {
        s1[i]=='+'?target++:target--;

        if(s2[i]=='+')
            sum++;
        else if(s2[i]=='-')
            sum--;
    }
    int marks=count(all(s2),'?');
    if(marks==0)
    {
        cout<<((sum==target)?1.0:0.0)<<endd;
        SEEYAH
    }
    queue<pi>q;
    if(s2[0]=='?')
    {
        q.emplace(1,1);
        q.emplace(1,-1);
    }
    else
        q.emplace(1,(s2[0]=='+'?1:-1));

    int x,y;
    vector<int>v;
    while(!q.empty())
    {
        x=q.front().first;y=q.front().second;
//        cout<<"x = "<<x<<" y = "<<y<<endd;
        if(x==sz(s2))
        {
            v.pb(y);
            q.pop();
            continue;
        }
        q.pop();
        if(s2[x]=='?')
        {
            q.emplace(x+1,y+1);
            q.emplace(x+1,y-1);
        }
        else
            q.emplace(x+1,(s2[x]=='+'?y+1:y-1));
    }
//    for(auto i:v)
//        cout<<i<<' ';
//    cout<<endd;
    cout<<(long double)count(all(v),target)/v.size()<<endd;
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cout<<fixed<<setprecision(12);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    BYE
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
