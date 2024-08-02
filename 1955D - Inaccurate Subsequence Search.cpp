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
#define point(x)     cout<<fixed<<setprecision(x);
#define endd    '\n'
#define SEEYAH    return;
#define BYE       return 0;
using namespace std;
vp directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
void solve()
{
    int n,m,k;cin>>n>>m>>k;

    vi a(n),b(m);
    input(a)
    input(b)

    multiset<int>s1(all(b)),s2;
    map<int,int>mp1,mp2;
    int counter=0;

    loop(0,m)
    {
        mp1[b[i]]++;
        if(s1.find(a[i])!=s1.end())
        {
            s1.erase(s1.find(a[i]));
            s2.insert(a[i]);
            counter++;
        }
        mp2[a[i]]++;
    }
    int answer=0;
    if(counter>=k)
        answer++;

    int x=0,y=m;
    while(y<n)
    {
        if(mp2[a[x]]<=mp1[a[x]]&&s2.find(a[x])!=s2.end())
        {
            s2.erase(s2.find(a[x]));
            counter--;
            s1.insert(a[x]);
        }
        mp2[a[x]]--;
        x++;

        if(s1.find(a[y])!=s1.end())
        {
            counter++;
            s1.erase(s1.find(a[y]));
            s2.insert(a[y]);
        }
        mp2[a[y]]++;
        y++;
        if(counter>=k)
            answer++;
    }
    cout<<answer<<endd;
    SEEYAH
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    point(12)
    ll t=1;
    cin>>t;
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
