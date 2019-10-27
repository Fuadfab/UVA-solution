#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
vector<long long>prime(10000000,true);
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
    ll x,n;
    while(cin >> x)
    {
        ll r=0,f=0,g=0;
        n=x;
        while(n!=0)
        {
            r = r*10;
            r = r+(n%10);
            n/=10;
        }
        if(prime[x]==true)
            ++f;
        if(prime[r]==true)
            ++g;
        if(f==1 &&g==1&& x!=r)
            cout<<x <<" is emirp."<<endl;
        else if(f==1 || f==1 && x==r)
            cout<<x <<" is prime."<<endl;
        else
            cout<<x <<" is not prime."<<endl;
    }
}
