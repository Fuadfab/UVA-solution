#include<bits/stdc++.h>
using namespace std;
vector<long long >prime(10000000,true);
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
void pri()
{
    for(ll i=2;i<=10000000;i++)
    {
        if(prime[i]==true)
        {
            for(ll j=i*2;j<=10000000;j+=i)
                prime[j]=false;
        }
    }
}

int main()
{
    pri();
    int x;
    vector<ll>v;
    vector<ll>v2;
    while(cin >>x)
    {
        int s = 0;
        if(x<=7)
            cout << "Impossible"<< endl;
        else
        {
            for(int i=2;i<x;i++)
            {
                if(prime[i]==true)
                {
                   if(i<x/2)
                       v.pb(i);
                    else
                        v2.pb(i);
                }
            }
            ll a,b,c=0,z,d,f;
            c=0;f=0;b=0;z=0;d=0;
        }
        v2.clear();
        v.clear();
    }
}
