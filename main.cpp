#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define is(x) cout<<((x)?"YES\n":"NO\n");
using namespace std;
vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
vector<ll> saved(1e6+1);
ll count(ll n)
{
    if(saved[n]!=0)
        return saved[n];

    ll counter=0;
    for (int i = 1; i <= sqrt(n) ; ++i)
    {
        if(!(n%i))
        {
            counter++;
            if(i*i!=n)
                counter++;
        }
    }
    saved[n]=counter;
    return counter;
}
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll answer=0,mod=2*1e30;
    for (int i = 1; i <=a ; ++i)
    {
        for (int j = 1; j <=b ; ++j)
        {
            for (int k = 1; k <=c ; ++k)
            {
                answer+=count(i*j*k);
            }
        }
    }
    cout<<answer%mod<<'\n';
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