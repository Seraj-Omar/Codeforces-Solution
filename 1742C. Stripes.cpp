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
    vt(v,8,8,char)
    bool b=false,r=false;
    loop(0,8)
    {
        loop2(0,8)
        {
            cin>>v[i][j];
            if(v[i][j]=='R')
                r=true;
            else if(v[i][j]=='B')
                b=true;
        }
    }
//    ....B...
//    ....B...
//    ....B...
//    RRRRRRRR
//    ....B...
//    ....B...
//    ....B...
//    ....B...

//    RRRRRRRB
//    B......B
//    B......B
//    B......B
//    B......B
//    B......B
//    B......B
//    RRRRRRRB

    if(!b)
        cout<<"R"<<endl;
    else if(!r)
        cout<<"B"<<endl;
    else
    {
//        It is guaranteed that the given field is obtained from a colorless one by drawing horizontal red rows and vertical blue columns.
//        At least one stripe is painted.
        loop(0,8)
        {
            r=true;
            loop2(0,8)
            {
                if(v[i][j]!='R') {
                    r = false;
                    break;
                }
            }
            if(r)
            {
                cout<<'R'<<endl;
                break;
            }
            b=true;
            loop2(0,8)
            {
                if(v[j][i]!='B') {
                    b = false;
                    break;
                }
            }
            if(b)
            {
                cout<<'B'<<endl;
                break;
            }
        }
    }
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
