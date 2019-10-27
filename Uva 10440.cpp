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
    int tt,n,t,m,z,ti,c,w;
    cin >> tt;
    vector<int>v;
    while(tt--)
    {
        cin >> n >> t >> m;
        for(ll i=0;i<m;i++)
        {
            cin >> z;
            v.pb(z);
        }
        ti=0,c=0,w=0;
        for(int i=0;i<v.size();)
        {
            if(m%2==0)
            {
                if(v[i+1]-v[i]<=t && ti<v[i+1])
                {
                    w=t;
                }
                if(w>0)
                {
                    ti+=w;
                    ti+=(2*t);
                    c++;
                    i+=2;
                    w=0;
                }
                if(v[i+1]<=ti)
                {
                    ti+=(2*t);
                    c++;
                    i+=2;
                }
                cout << ti-t << endl;
                cout <<c << endl;
            }

        }
    }
}
