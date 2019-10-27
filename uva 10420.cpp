#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    map<string,int>m;
    for(int i=0;i<x;i++)
    {
        string str2;
        cin >> str2;
        string str;
        getline(cin,str);
        m[str2]+=1;
    }
    for(map<string,int>::const_iterator it = m.begin();it!=m.end();it++)
        cout << it->first <<" "<<it->second<< endl;

    m.clear();
}
