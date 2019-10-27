#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
int main()
{
    int x,y,a,b,c=1;
    vector<int>v;
    while(cin >> x >> y)
    {
        if(x==0 && y==0)break;
        for(int i=0;i<x;i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        cout << "CASE# "<<c <<":"<<endl;
        for(int i=0;i<y;i++)
        {
            cin >> b;
            int flag=0;
            for(int j=0;j<v.size();j++)
            {
                if(v[j]==b)
                {
                    cout << b <<" found at "<< j+1 << endl;
                    flag =1;
                    break;
                }
            }
            if(flag==0)
                cout <<b <<" not found"<< endl;
        }
        c++;
        v.clear();
    }
}
