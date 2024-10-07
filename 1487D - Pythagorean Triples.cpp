#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll           long long int
#define ld           long double
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered set

template<typename T>
using o_mset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered multiset

//i>=0&&j>=0&&i<n&&j<m; valid
//vector v(n,vector(m,vector<ll>(k)));//3D vector
//vector<vector<ll>> v(n,vector<ll>(m))//2D vector
vector<pair<ll,ll>> di = {{1,1},{-1,-1},{0,0}};
const ll mod=1e9+7;
const ll inf=2e18+1;

void solve()
{
    ll n;cin>>n;

    n--;
    cout<<(ll)(sqrt(2*n+1)-1)/2<<'\n';
/*
     venyas equation c = a^2 - b
     Pythagorean c^2 = a^2 + b^2

    c = a^2 - b -> c^2 = (a^2 -b)^2
    solving the right side c^2 = a^4 - 2*a^2*b + b^2

    a^4 - 2*a^2*b + b^2 = a^2 + b^2 (cancel b^2)
    a^4 - 2*a^2*b = a^2 (divide by a^2)
    a^2 - 2b = 1
    a^2 = 2b+1
    a = sqrt(2b+1)

    sub a in vanyas equation c = sqrt(2b+1)^2 -b
    c = 2b + 1 - b = b + 1

    (a , b , c) = (sqrt(2b+1) , b , b+1)

    each of these numbers should be less than n

    for b and b+1 we can put b <= n-1 or b<n

    so we are left with two conditions:
    -sqrt(2b+1) <= n --> we want this to be a positive int not a float
    -b<n

    sqrt(2b+1) this cannot be even and cannot be 1
    why cant be even?
    if we return to this equation a^2 = 2b+1
    if a is even then its square will be even and if its odd its square will be odd
    a^2(even) - 1 = odd
    b= odd/2 this is not an int number
     and not one cause if we solve for b the ans will be 0 and this is not an positive int

    so our conditions are
    -sqrt(2b+1) <= n
    -b<n or b <= n-1
    -sqrt(2b+1) = a should be odd and not equal to 1

    now lets say that n = 6
    so  a = sqrt(11) = 3.something --> this in int is equal to 3
    so every odd number <= 3 and != 1 is an solution

    so we find the solution for our maximum b witch it n-1
    and find all odd number except 1
    and this is the way sqrt(2*n+1)-1)/2
*/
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(15);
    ll t = 1;
    cin>>t;
    while (t--) { solve(); }
    return 0;
}
