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
#define vti(v,n,m,int,initial)   vector<vector<int>> v(n, vector<int>(m,initial));
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
#define is(x) cout<<((x)?"Yes\n":"No\n");
#define endd    '\n'
#define SEEYAH    return;
#define BYE       return 0;
using namespace std;
//vp(int,int) directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
void solve()//first solution using DFS
{
    ll n;cin>>n;
    vv(ll)v(n+1);
    ll x;
    loop(2,n+1)
    {
        cin >> x;
        v[i].pb(x);
        v[x].pb(i);
    }

    bool spruce=true;
    ll counter=0;

    loop(1,n+1)
    {
        if(v[i].size()==1)
            continue;

        counter=0;
        for(auto j:v[i])
        {
            if (v[j].size() != 1)
                continue;
            counter++;
        }

        if(counter<3)
        {
            spruce=false;
            break;
        }
    }
    is(spruce)
}

void solve2()//second solution using BFS
{
    ll n;cin>>n;
    vv(ll)v(n+1);

    ll x;
    loop(2,n+1)
    {
        cin >> x;
        v[i].pb(x);
        v[x].pb(i);
    }

    queue<ll>q;
    ve(bool)visited(n+1);

    q.push(1);
    visited[1]=true;

    bool spruce=true;
    while(!q.empty())
    {
        x=q.front();
        q.pop();

        ll counter=0;
        for(auto i:v[x])
        {
            if(!visited[i])
            {
                if (v[i].size() == 1)
                    counter++;
                else
                    q.push(i);
                visited[i] = true;
            }
        }

        if(counter<3)
        {
            spruce=false;
            break;
        }
    }
    is(spruce)
}
int main()
{
    SerajOmar
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll t=1;
//    cin>>t;
    while (t--){solve();}
    BYE
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/
