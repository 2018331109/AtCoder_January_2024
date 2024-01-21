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
    cin>>n;
    string s, t;
    cin>>s>>t;
    int a=0,b=0;
    int f=0;
    if(s==t)
    {
        cout<<0<<endl;
        return;
    }
    if(s[0]=='A' && t[0]=='B')
    {
        cout<<-1<<endl;
        return;
    }

    int ans=0;
    int cnt=0;
    char lastmiss;
    int lastmisspos=-1;
    int lastB=-1;
    for(int i=0; i<n; i++)
    {
        if(s[i]!=t[i])
        {
            if(s[i]=='B')
            {
                cnt++;
                lastmiss='B';
                lastmisspos=i;
            }
            else
            {
                if(a==0)
                {
                    cout<<-1<<endl;
                    return;
                }
                ans++;
                if(cnt>0)
                {
                    cnt--;
                }
            }
        }
        if(t[i]=='A')
        {
            a++;
        }
        else
        {
            b++;
            lastB=i;
        }
    }

    if(lastmiss=='B' && lastmisspos>=lastB)
    {
        cout<<-1<<endl;
        return;
    }

    ans+=cnt;
    cout<<ans<<endl;
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

