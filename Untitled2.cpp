#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z,k,r,e;
    cin >> x >> y >> z;
    int sum = 0;
    vector<int> v,u,zz;
    for(int i=0;i<z;i++)
    {
        cin >> k >> r >> e;
        v.push_back(k);
        v.push_back(r);
        u.push_back(e);
    }
    int co = 0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]!= v[i+1])
        {
            zz.push_back(v[i]);
        }
        else if(v[i]!= v[i+1])
        {
             i++;
        }
        if(v[i]==x)
        {
             zz.push_back(v[i])
        }
    }
    for(int i=0;i<zz.size();i++)
    {
        cout << zz[i] <<endl;

    }
}
