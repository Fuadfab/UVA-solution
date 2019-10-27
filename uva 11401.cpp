#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
ll f[1000007], p[1000007];
void pattern()
{
   ll c=0;
   f[3]=0,p[3]=0;
   for(ll i=4;i<=1000000;i++)
   {
       if(i%2==0)
       {
           c++;
           p[i]=p[i-1]+c;
           f[i]=f[i-1]+p[i];
       }
       else
       {
           p[i]=p[i-1]+c;
           f[i]=f[i-1]+p[i];
       }
   }
}

int main()
{
    ll int x;
    pattern();
    while(cin >> x&& x>=3)
    {
        if(x==0)
            break;
        cout << f[x] << endl;
    }
}
