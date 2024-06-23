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
#define pi  pair<ll,ll>
#define vp  vector<pi>
#define cy  cout<<"YES"<<endl;
#define cn  cout<<"NO"<<endl;
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(v)  v.begin(),v.end()
#define STFU    return;
using namespace std;
void solve()
{
    ll n,m;cin>>n>>m;
    ll a[n][m];
    set<ll> rows,columns;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
            if(a[i][j]==1) {
                rows.insert(i);
                columns.insert(j);
            }
        }
    }
    
    ll counter=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(a[i][j]==0&&rows.find(i)==rows.end()&&columns.find(j)==columns.end())
            {
                a[i][j]=1;
                rows.insert(i);
                columns.insert(j);
                counter++;//to count how many cells were claimed
            }
        }
    }
    //Ashish starts first so if the number of cells claimed is an odd number then the last one claimed was by Ashish
    if(counter%2!=0)
        cout<<"Ashish"<<endl;

    else
        cout<<"Vivek"<<endl;

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
