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
    int t,x,y;
    cin >> t;
    while(t--)
    {
        cin >> x>> y;
        int a = x/3;
        int b = y/3;
        cout << (a*b) << endl;
    }
}
