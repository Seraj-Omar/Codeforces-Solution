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

vector<ll>primes(1e5+1);
void solve()
{
    string s;cin>>s;
    if(s.size()==1)
        cout<<-1<<'\n';
    else
    {
        vector<string>v{"00","25","50","75"};
        ll mn=inf;
        for(auto i:v)
        {
            string temp=s;

            ll p1=temp.rfind(i[1]);
            if(p1==string::npos)
                continue;
            temp.erase(p1,1);

            ll p2=temp.rfind(i[0]);
            if(p2==string::npos)
                continue;
            temp.erase(p2,1);

            ll counter=0;
            for (int j = 0; j < temp.size(); ++j)
            {
                if(temp[j]=='0')
                    counter++;
                else break;
            }

            ll swaps=s.size()*2-p1-p2-3+counter;
            mn= min(mn,swaps);

        }
        cout<<((mn==inf)?-1:mn)<<'\n';
    }
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    cout<<fixed<<setprecision(10);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    return 0;
}