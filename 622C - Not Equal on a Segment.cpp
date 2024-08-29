#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
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

vector<vector<int>>build(vector<int> &a)
{
    int n=a.size(),k= log2(n)+1;
    vector<vector<int>>sparseTable(n,vector<int>(k,0));

    for (int i = 0; i < n; ++i)
    {
        sparseTable[i][0]=a[i];
    }

    for (int j = 1; j < k; ++j)
    {
        for (int i = 0; i < n - (1 << j) + 1; ++i)
        {
            sparseTable[i][j]= gcd(sparseTable[i][j-1], sparseTable[i+(1<<(j-1))][j-1]);
        }
    }

    return sparseTable;
}

int st(vector<vector<int>> &sparseTable,int l,int r)
{
    int k= log2(r-l+1);
    return gcd(sparseTable[l][k],sparseTable[r-(1<<k)+1][k]);
}
void solve()
{

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
