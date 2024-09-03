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

void solve()
{
   string s;cin>>s;
   if(!std::count(s.begin(), s.end(),'A')||!std::count(s.begin(), s.end(),'B'))
       cout<<0<<'\n';
   else
   {
       vector<ll>index;
       index.push_back(-1);//for the first b
       for (int i = 0; i < s.size(); ++i)
       {
           if(s[i]=='B')
               index.push_back(i);
       }
       index.push_back(s.size());//for the last b

//       for(auto i:index)
//           cout<<i<<' ';
//       cout<<'\n';
       vector<ll>v;
       for (int i = 0; i <index.size()-1 ; ++i)
       {
           v.push_back(index[i+1]-index[i]-1);
       }
       ll answer=0;
       std::sort(v.begin(), v.end());
       for(auto i:v)
           answer+=i;
       cout<<answer-v[0]<<'\n';
   }
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
