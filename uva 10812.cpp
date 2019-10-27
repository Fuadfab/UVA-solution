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
    ll x,y;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        ll b = (x-y)/2;
        ll a = x-b;
        if(a<0 || b<0)
            cout <<"impossible"<<endl;
        else
            cout << a <<" "<< b << endl;
    }
}
