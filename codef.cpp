#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
int main()
{
    ll t,z,x;
    cin >> t;
    for(ll i=0;i<t;i++)
    {
        ll sum =0;
        cin >>z;
        for(ll j=0;j<z;j++)
        {
            cin >>x;
            sum+=x;
        }
        if(sum%z==0)
            cout <<(int)(sum/z) << endl;
        else
        {
            double ans = ((double)sum/z);
            ll nn=ceil(ans);
            cout <<nn << endl;
        }
    }

}
