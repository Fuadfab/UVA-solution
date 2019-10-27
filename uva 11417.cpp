#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ll int x,g;
    while(cin >>x)
    {
        if(x==0)
            break;
        g=0;
        for(int i=1;i<x;i++)
        {
            for(int j=i+1;j<=x;j++)
            {
                g= g+gcd(i,j);
                //cout << g << endl;
            }
        }
        cout << g << endl;
    }
    return 0;
}
