#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
vector<ll>prim;
vector<bool>b(100091000,true);
void prime()
{
    for(ll i=2;i<=100091000;i++)
    {
        if(b[i]==true)
        {
            for(ll j=i*2;j<=100091000;j+=i)
                b[j]=false;
        }
    }
}
int main()
{
    prime();
    ll x,y;
    while(cin >> x>>y)
    {
        ll c=0;
        for(ll i=x;i<=y;i++)
        {
            ll ans = (i*i+i+41);
            if(b[ans]==true)
            {
                c++;
            }
        }
        y++;
        double ans = ((double)c/double(y-x))*100;
        cout << c << (y-x)<< endl;
        std::cout << std::setprecision (2) << ans << std::endl;
    }
}
