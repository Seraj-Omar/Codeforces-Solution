/*
 بسم الله الرحمن الرحيم

 Code by SerajOmar :)


     ███████ ███████ ██████   █████      ██████
     ██      ██      ██   ██ ██   ██       ██
     ███████ █████   ██████  ███████       ██
          ██ ██      ██   ██ ██   ██ ██    ██
     ███████ ███████ ██   ██ ██   ██ ████████
                                        -BATMAN-

    i am the night...i am vengeance...I AM BATMAN

    LETS GOOOOO
 */
#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define ve(ll)   vector<ll>
#define vv(ll)  vector<vector<ll>>
#define vt(v,n,m,int)   vector<vector<int>> v(n, vector<int>(m));
#define pi(ll,int)  pair<ll,int>
#define vp(ll,int)  vector<pi(ll,int)>
#define pb(n)  push_back(n)
#define yes  cout<<"YES\n";
#define no  cout<<"NO\n";
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(v)  v.begin(),v.end()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define endd    '\n'
#define SEEYAH    return;
using namespace std;
void solve()
{
    int n;cin>>n;

    ve(ll)v(n),prefix_sum(n, 0),sorted(n),sorted_prefix_sum(n,0);

    for(auto& i:v)
        cin >> i;

    sorted=v;
    sort(all(sorted));

    prefix_sum[0] = v[0];
    sorted_prefix_sum[0] = sorted[0];
    loop(1,n)
    {
        prefix_sum[i] = prefix_sum[i - 1] +v[i];
        sorted_prefix_sum[i] = sorted_prefix_sum[i - 1] +sorted[i];
    }

    ll m,type,l,r;
    cin>>m;

    while(m--)
    {
        cin>>type>>l>>r;
        if(type==1)
        {
            if(l==1)
                cout<<prefix_sum[r-1]<<endl;
            else
                cout << prefix_sum[r - 1] - prefix_sum[l - 2] << endl;
        }
        else
        {
            if(l==1)
                cout<<sorted_prefix_sum[r-1]<<endl;
            else
                cout << sorted_prefix_sum[r - 1] - sorted_prefix_sum[l - 2] << endl;
        }
    }
    SEEYAH
}
int main()
{
    SerajOmar
    ll t=1;
//    cin>>t;
    while (t--){solve();}
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
