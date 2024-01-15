#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;


void solve()
{
    int n;
    int q;
    cin>>n>>q;
    vector<pair<int, int>>v;
    int x=1, y=0, cnt=0;

    for(int i=0; i<q; i++)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            cnt++;
            char ch;
            cin>>ch;
            if(ch=='U')
            {
                y+=1;
                v.pb({x, y});
            }
            if(ch=='D')
            {
                y-=1;
                v.pb({x, y});
            }
            if(ch=='L')
            {
                x-=1;
                v.pb({x, y});
            }
            if(ch=='R')
            {
                x+=1;
                v.pb({x, y});
            }
        }
        else
        {
            int xy;
            cin>>xy;
            if(xy>v.size())
            {
                cout<<xy-cnt<<" "<<0<<endl;
            }
            else
            {
                cout<<v[cnt-xy].first<<" "<<v[cnt-xy].second<<endl;
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

