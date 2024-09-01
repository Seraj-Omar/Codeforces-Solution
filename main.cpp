// an eternity without me.........
//You will look into the faces of passers by hoping for something that will for an instant bring me back to you
//You will find moonlight nights strangely empty because when you call my name through them there will be no answer
//Always your heart will be aching for me and your mind will give you the doubtful consolation that you did a brave thing

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

ll n,x;
vector<ll>v;
bool valid(ll mid)
{
    ll sum=0;
    for(auto i:v)
    {
        if(i<mid)
            sum+=mid-i;
    }
    return sum<=x;
}
void solve()
{
    cin>>n>>x;
    v.resize(n);
    for(auto& i:v)cin>>i;

    ll left=0,right=1e10,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(valid(mid))
            left=mid+1;
        else
            right=mid-1;
    }
    cout<<left-1<<'\n';
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