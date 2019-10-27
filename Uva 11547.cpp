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
    ll t,x;
    cin >> t;
    while(t--)
    {
        cin >> x;
        ll mul= x*567;
        ll m1 = mul/9;
        ll m2 = m1+7492;
        ll m3 = m2*235;
        ll m4 = m3/47;
        ll m5 = m4-498;
        ostringstream ss;
        ss << m5;
        string s=ss.str();
        cout << s[s.size()-2] << endl;
    }
}
