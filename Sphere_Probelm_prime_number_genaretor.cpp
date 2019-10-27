#include<bits/stdc++.h>
using namespace std;
vector<long long>prime(100000,true);
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back

void pri()
{
    for(ll i=2;i<=100000;i++)
    {
        if(prime[i]==true)
        {
            for(ll j=i*2;j<=100000;j+=i)
                prime[j]=false;
        }
    }
    for(int i=0;i<1000;i++)
        if(prime[i]==true)
            cout << i <<endl;
}
int main()
{
	pri();

	return 0;
}
