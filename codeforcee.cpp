#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,y;
    map<char,int>m;
    while(cin>> x>>y)
    {
        if(x>y)
            swap(x,y);
        int c=0,k,l;
        for(long long int i=x;i<=y;i++)
        {
            int z = i;
            ostringstream strl;
            strl<< i;
            string str = strl.str();
            l = str.length();
            if(l==1)
            {
                cout << str << endl;
                c=5;
                break;
            }
            if(l>=2){
            for(int i=0;i<l;i++)
            {
                m[str[i]]+=1;
            }
            map<char, int>::iterator itr;
            int sum =0;
            for (itr = m.begin(); itr != m.end();  ++itr)
            {
                sum +=itr->second;
            }
            if(sum == m.size())
            {
                cout << str << endl;
                c=1;
            }
            }
             m.clear();
            if(c==1)
                break;
        }
        if(c==0)
            cout << "-1" << endl;

    }
}
