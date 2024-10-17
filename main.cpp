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

//vector v(n,vector(m,vector<ll>(k)));//3D vector
//vector<vector<ll>> v(n,vector<ll>(m))//2D vector

//vector<ll>dx= {-1, 1, 0, 0, -1,  1, -1, 1};//8 moves
//vector<ll>dy= {0, 0, -1, 1,  1, -1, -1, 1};

//vector<ll>dx= {1,-1,0,0};//4 moves
//vector<ll>dy= {0,0,1,-1};

//memset(dp,-1,sizeof dp)
const ll mod=1e9+7;
const ll inf=2e18+1;

void solve()
{
    ll x,y;cin>>x>>y;
    ll turn=true;

    //2*100+2*10||1*100+12*10||0*100+22*10
    while(x||y)
    {
        if (turn)
        {
            if(x>=2&&y>=2)
            {
                x-=2;
                y-=2;
            }
            else if(x>=1&&y>=12)
            {
                x--;
                y-=12;
            }
            else if(y>=22)
                y-=22;
            else
                break;
        }
        else
        {
            if(y>=22)
                y-=22;
            else if(x>=1&&y>=12)
            {
                x--;
                y-=12;
            }
            else if(x>=2&&y>=2)
            {
                x-=2;
                y-=2;
            }
            else
                break;
        }
        turn=!turn;
    }
    cout<<((!turn)?"Ciel":"Hanako")<<'\n';
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(15);
    ll t = 1;
//    cin>>t;
    while (t--) { solve(); }
    return 0;
}