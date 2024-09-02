#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define is(x) cout<<((x)?"YES\n":"NO\n");
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered set

template<typename T>
using o_mset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;//ordered multiset

//i>=0&&j>=0&&i<n&&j<m; valid
vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
const ll mod=1e9+7;

void solve()
{
    char g[11][11];
    vector<ll>v;
    ll answer=0;
    for (int i = 1; i <=10 ; ++i)
    {
        for (int j = 1; j <=10 ; ++j)
        {
            cin>>g[i][j];
            if(g[i][j]=='X')
            {
                if(i==1||j==1||i==10||j==10)
                    answer+=1;
                else if(i==2||j==2||i==9||j==9)
                    answer+=2;
                else if(i==3||j==3||i==8||j==8)
                    answer+=3;
                else if(i==4||j==4||i==7||j==7)
                    answer+=4;
                else if(i==5||j==5||i==6||j==6)
                    answer+=5;
            }
        }
    }
    cout<<answer<<'\n';
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
