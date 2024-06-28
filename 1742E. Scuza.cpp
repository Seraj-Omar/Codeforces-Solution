/*
 بسم الله الرحمن الرحيم

 Code by SerajOmar :)


     ███████ ███████ ██████   █████      ██████
     ██      ██      ██   ██ ██   ██       ██
     ███████ █████   ██████  ███████       ██
          ██ ██      ██   ██ ██   ██ ██    ██
     ███████ ███████ ██   ██ ██   ██ ████████
                                    ⠀    -HIM-
    LETS GOOOOO
 */
#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define OneTest     solve();
#define MultipleTests     int t;cin>>t;while(t--){solve();}
#define ll  long long
#define vi   vector<ll>
#define vt(v,n,m,int)   vector<vector<int>> v(n, vector<int>(m));
#define pi  pair<ll,ll>
#define vp  vector<pi>
#define yes  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(v)  v.begin(),v.end()
#define STFU    return;
using namespace std;
void solve()
{
    ll n,q;cin>>n>>q;
    vi v(n);
    input(v)

    vp qu(q);
    loop(0,q)
    {
        cin>>qu[i].first;
        qu[i].second=i;
    }
    std::sort(qu.begin(), qu.end());

    vi a(q);
    ll sum=0,j=0;
    loop(0,q)
    {
        while(v[j]<=qu[i].first&&j<n)
        {
            sum+=v[j];
            j++;
        }
        a[qu[i].second]=sum;
    }
    for(ll i:a)
        cout<<i<<' ';
    cout<<endl;
    STFU
}
//second solution using upperbound binary search algorithm 
bool valid(ll stair,ll height)
{
    return height>=stair;
}
void solve2()
{
    ll n,q;cin>>n>>q;
 
    vi v(n);
    vi prefix(n);
    vi stairs;
 
    cin>>v[0];
    prefix[0]=v[0];
 
    ll Max=v[0];
    stairs.push_back(Max);
    loop(1,n)
    {
        cin>>v[i];
        Max= max(Max,v[i]);
        stairs.push_back(Max);
        prefix[i] = prefix[i - 1] + v[i];
    }
 
    vi height(q);
    input(height)
//    4 5
//    1 2 1 5
//    1 2 4 9 10
 
//    1 4 4 9 9
    loop(0,q) {
        if(stairs[0]>height[i]) {
            cout << 0 << ' ';
            continue;
        }
        if(stairs[n-1]<=height[i]) {
            cout << prefix[n - 1] << ' ';
            continue;
        }
        ll left = 0, right = n-1, mid;
        while (right - left > 1)
        {
            mid = (left + right) / 2;
            if (valid(stairs[mid], height[i]))
                left = mid;
            else
                right = mid;
        }
        cout << prefix[left] << ' ';
    }
    cout<<endl;
    STFU
}
int main()
{
    SerajOmar
    MultipleTests
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
