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
    int t,x;
    string str;
    cin >> t;
    while(t--)
    {
        cin >> x;
        cin >> str;
        ll first=0,last=0;
        for(int i=0;i<x;i++)
        {
            if(str[i]=='1')
            {
                first = i+1;
                break;
            }
        }
        for(int j=x-1;j>=0;j--)
            if(str[j]=='1')
            {
                last = j+1;
                break;
            }
        if(str[x-1]=='1')
            cout << x*2 << endl;
        else if(str[0]=='1')
            cout << x*2 << endl;
        else
        {
            if(first==0&& last==0)
                cout << x << endl;
            else{
            ll f,l;
            l =last-0;
            f = x-first;
            if(l>=f)
               cout << l*2<< endl;
            else
                cout <<(f*2)+2 << endl;
            }
        }
    }
}
