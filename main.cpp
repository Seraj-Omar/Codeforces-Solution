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
using namespace std;

//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;

//template<typename T>
//using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered set

//template<typename T>
//using o_mset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered multiset

vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
void solve()
{
    ll left=0,right=1e6+1,mid;
    while(right-left>1)
    {
        mid=(left+right)/2;
        cout<<mid;
        cout<<endl;

        string s;cin>>s;
        cout<<endl;
        if(s=="<")
            right=mid;
        else
            left=mid;
    }
    cout<<"! "<<left;
    cout<<endl;
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



Modular Arethmatic:
   (a+b)%c = ((a%c)+(b%c))%c
   (a-b)%c = ((a%c)-(b%c)+c)%c
   (a*b)%c = ((a%c)*(b%c))%c
   (a/b)%c = ((a%c)*(pow(b,-1)%c)%c

   log(n);=L L : e ^ L = n
   log2(n);=L L : 2 ^ L = n
   log10(n);=L L : 10 ^ L = n

if we have a large number(over 1e18) we takse it as a string and to see if:

    even or odd we see the last digit % 2

    divisable by 3 or 9 we find the sum of all digits % 3 or 9

    by 4 we take the first two digits and see if the sum is divisable by 4

    by 5 we see the first digit if it was 5 or 0 then the number is divisable

    by 6 if the number is even and divisable by 3

    by 8 we take the first three digits and see if the sum is divisable by 8

    by 10 the first digit is zero

    // for any other number as a mod we can take every digit as it is from the string 1234 so one here is 1000
    then take the mod for that number like this: (a+b)%c = ((a%c)+(b%c))%c

    string n;
	long long mod,result=0;
	cin >> n >> mod;
	for (int i = 0; i < n.size(); i++)
	{
		result *= 10;
		result += n[i]-'0';
		result %= mod;
	}
	if (result == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;



Lowercase 97-122
Uppercase 65-90


Bitwise operations :

    And [ & ]:  1&1 =1  otherwise = 0 (the min num or less)
    Or [ | ] :  0 | 0 = 0 otherwise = 1 (the max num or more)
    Xor [ ^ ] : 1^1 = 0 , 0^0 =0  , 1^0 =1 , 0^1=1
    Shift Left [ << ] : multiply by 2 ,10<<2 10 in binary=1010 after shifting 101000=40 and x<<y = x*pow(2,p)
    Shift Right [ >> ] : divide by 2 ,x>>y = x/pow(2,y) f
    int x = 0b101 this form will transform it from binary to decimal x=5

Check bit:

    x&(1<<n);
    (1<<n) this create 1 and n zeros and if the bit in the pos n is one then it will return 1
    this check the Nth bit if 1 or 0

Set bit:

    x|=(1<<n)
    this sets the Nth bit to 1

Clear bit:

    a&=~(1<<n)
    this clears the Nth bit



BITMASK:

    bool check(ll x,ll n)
    {
        return x&(1<<n);
    }
    void solve()
    {
        vector<ll> a={0, 1,2,3,4,5,6,7,8,9,10};
        for (int i = 0; i <=(1<<a.size() ) ; ++i)
        {
            for (int j = 0; j < a.size(); ++j)
            {
                if (check(i,j))
                    cout<<a[j]<<' ';
            }
            cout<<'\n';
        }
    }



Binary Exponentation :

    //aka fast power
    ll power(ll a,ll b)// a^b=(a^(b/2))^2 here ^ is the power not XOR
    {
        if(!b)
            return 1;
        if(b==1)
            return a;

        ll answer;
        answer= power(a,b/2);
        answer*=answer;
        answer%=mod //if he asked for the answer to be mod a number usually 1e9+7
        if(b%2)
        {
            answer*=a;
            answer%=mod
        }
        return answer;
    }



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