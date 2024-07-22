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
#define vti(v,n,m,int,initial)   vector<vector<int>> v(n, vector<int>(m,initial));
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
//vp(int,int) directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
void solve()
{
    ll n;cin>>n;

    ve(ll)v(n+1);
    vv(ll) graph(n+1);
    ve(ll) oddValue(n+1,-1),evenValue(n+1,-1);
    queue<ll>odd,even;

    loop(1,n+1)
    {
        cin>>v[i];
        if(i+v[i]<=n)
            graph[i+v[i]].pb(i);

        if(i-v[i]>0)
            graph[i-v[i]].pb(i);

        if(v[i]%2)
        {
            odd.push(i);
            oddValue[i]=0;
        }
        else
        {
            even.push(i);
            evenValue[i]=0;
        }
    }

    ll x;
    while(!odd.empty())
    {
        x=odd.front();
        odd.pop();
        for(auto i:graph[x])
        {
            if(oddValue[i]==-1)
            {
                oddValue[i] = oddValue[x] + 1;
                odd.push(i);
            }
        }
    }
    while(!even.empty())
    {
        x=even.front();
        even.pop();

        for(auto i:graph[x])
        {
            if(evenValue[i]==-1)
            {
                evenValue[i] = evenValue[x] + 1;
                even.push(i);
            }
        }
    }
    loop(1,n+1)
    {
        if (v[i] % 2 == 0)
            cout << oddValue[i] << " ";

        else
            cout << evenValue[i] << " ";
    }
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    BYE
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
