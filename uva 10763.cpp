#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
void printVector(vector<int>v)
{
    for(int i=0;i<v.size();i++)
        cout << v[i] <<" ";
    cout << endl;
}

int main()
{
    ll t,x,y;
    vector<int>v,v1;
    while(cin >> t)
    {
        if(t==0)
            break;
        for(int i=0;i<t;i++)
        {
            cin >> x >> y;
            v.pb(x);
            v1.pb(y);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        if(v1==v)
            cout << "YES"<< endl;
        else
            cout << "NO"<< endl;
        v.clear();
        v1.clear();
    }
}
