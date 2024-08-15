#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define endd    '\n'
using namespace std;
vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
ll n,m,counter=0;
vector<bool>color,vis;
vector<vector<pair<ll,ll>>>v;
void dfs(ll i,ll end,ll colour)
{
    if(vis[i])
        return;

    vis[i]=true;
    if(i==end)
    {
        counter++;
        return;
    }

    loop2(0,v[i].size())
    {
        if(v[i][j].second==colour&&!(vis[v[i][j].first]))
            dfs(v[i][j].first,end,colour);
    }
}
void solve()
{
    cin>>n>>m;
    v.resize(n+1);
    color.resize(m+1);
    vis.resize(n+1);

    ll a,b,c;
    while(m--)
    {
        cin>>a>>b>>c;
        v[a].emplace_back(b,c);
        v[b].emplace_back(a,c);
    }

    ll q;cin>>q;
    while(q--)
    {
        cin>>a>>b;
        loop(0,v[a].size())
        {
            if(!color[v[a][i].second])
            {
                color[v[a][i].second]=true;
                dfs(a,b,v[a][i].second);
                fill(all(vis),false);
            }
        }
        fill(all(color),false);
        cout<<counter<<endd;
        counter=0;
    }
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(9);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    return 0;
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
/*
   i>=0&&j>=0&&i<n&&j<m;

   (n * (n + 1)) even 1-n but you use n/2 not n (n/2*(n/2+1)
   pow(((n + 1) / 2),2) odd 1-n
   n(n+1)/2 sum 1-n

   (a+b)%c = ((a%c)+(b%c))%c
   (a-b)%c = ((a%c)-(b%c)+c)%c
   (a*b)%c = ((a%c)*(b%c))%c
   (a/b)%c = ((a%c)*(pow(b,-1)%c)%c

   Lowercase 97-122
   Uppercase 65-90

   Do you remember the complexity table?
   Some estimations that may help

    N                      complexity                  Possible Algorithms & Techniques

    10^18                  O(log(N))                   Binary & Ternary Search / Matrix Power / Cycle Tricks / Big Simulation Steps / Values ReRank
    100 000 000            O(N)                        A Linear Solution - May be a greedy algorithm
    40 000 000             O(N log N)                  Linear # calls to Binary & Ternary Search / Pre-processing & Querying / D & C
    10 000                 O(N2)                       adhock / DP / Greedy / D & C / B & B
    500                    O(N3)                       adhock / DP / Greedy / ..
    90                     O(N4)                       adhock / DP / Greedy / ..
    30-50                  -                           Search with pruning - branch and bound
    40                     O(2^N/2)                    Meet in Middle
    20                     O(2^N)                      Backtracking / Generating 2^N Subsets
    11                     O(N!)                       Factorial / Permutations / Combination Algorithm
*/
