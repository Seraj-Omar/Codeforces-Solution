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
void solve()
{
    ll n;cin>>n;
    deque<ll>v(n);
    for(auto& i:v)
        cin >> i;

    ll alice=0,bob=0,counter=0,boul=0,last=0;
    bool turn=false;
    while(!v.empty())
    {
        boul=0;
        if(!turn)
        {
            while(boul<=last&&!v.empty())
            {
                boul+=v.front();
                v.pop_front();
            }
            last=boul;
            alice+=boul;
            turn= true;
        }
        else
        {
            while(boul<=last&&!v.empty())
            {
                boul+=v.back();
                v.pop_back();
            }
            last=boul;
            bob+=boul;
            turn= false;
        }
        counter++;
    }
    cout<<counter<<' '<<alice<<' '<<bob<<endd;
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(9);
    ll t=1;
    cin>>t;
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