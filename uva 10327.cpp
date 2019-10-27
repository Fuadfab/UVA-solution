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
    int x,z;
    vector<int>v;
    while(cin >> x)
    {
        ll c =0;
        int v[x];
        for(int i=0;i<x;i++)
        {
            cin >> v[i];
        }
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<x-1;j++)
            {
                if(v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                    c++;
                }
            }
        }
        cout <<"Minimum exchange operations : "<< c << endl;
    }
}
