#include<bits/stdc++.h>
using namespace std;
vector<int>vv;
int fun(int x,int t)
{
    vv.push_back(x);
    if(vv.size()==t)
    {
        int c=0;
        sort(vv.begin(),vv.end());
        for(int i=1;i<=t;i++)
        {
            if(i==vv[i-1])
            {
                c++;
            }
        }
        if(c!=t)
            return -1;
        vv.clear();
    }
}

int main()
{
    int x,a,b,z;
    cin >> x;
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<x;i++)
    {
        cin >> a>>b;
        int x=0;
        for(int i=0;i<b;i++)
        {
            cin >> z;
            v.push_back(z);
        }
        int flag = 0;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]+=1;
            flag=fun(v[i],a);
            if(flag ==-1)
                break;
        }

        if(flag==-1)
            cout << "NO"<<endl;
        else
            cout << "YES"<< endl;

        vv.clear();
        v.clear();
        m.clear();
    }
}
