#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,a,b;
    string str;
    cin >> x >> y;
    cin >> str;
    map<char,int>m;
    for(int i=0;i<y;i++)
    {
        cin >> a >> b;
        for(int j=a-1;j<b;j++)
            m[str[j]]+=1;
        int s=0;
        char c;
        for(map<char,int>::const_iterator it = m.begin();it!=m.end();it++)
        {
            if(it->second>s)
            {
                s=it->second;
                c=it->first;
            }
        }
        cout << c <<" "<<s <<endl;
        m.clear();
    }
}
