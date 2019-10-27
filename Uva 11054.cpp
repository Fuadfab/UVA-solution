#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
int main()
{
    ll x;
    while(cin >>x)
    {
        if(x==0)
            break;
        ll v[x];
        for(ll i=0;i<x;i++)
            cin >> v[i];
        ll c=0;
        for(ll i=0;i<x;i++)
        {
            if(v[i]!=0)
            {
                for(ll j=0;j<x;j++)
                {
                    if(v[i]>0 && v[j]<0&& i!=j)
                    {
                        while(v[i]!=0)
                        {
                            if(v[j]==0)
                                break;
                            v[i]-=1;
                            v[j]+=1;
                            ll kk=abs(j-i);
                            c+=kk;
                        }
                    }
                }
            }
        }
        cout << c << endl;
    }
}
