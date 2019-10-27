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
    unsigned long long int x;
    while(cin >>x)
    {
        unsigned long long int ans =((x*x)*((x+1)*(x+1)))/4;
        cout << ans << endl;
    }
}
