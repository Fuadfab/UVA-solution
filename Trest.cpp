#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
int main()
{
   ll t,x,y,x1,y1;
   cin >> t;
   string str;
   while(t--)
   {
        cin >> x;
        cin.ignore();
        cin >> str;
        int s = str.size();
        map<char,int>m;
        vector<int>v;
        int c=0;
        for(int i=0;i<s;i++)
        {
            if(str[i]=='_')
                c++;
            m[str[i]]+=1;
        }
        map<char,int>::iterator it;
        for(it=m.begin();it!=m.end();++it)
        {
            if(it->first != '_')
                v.push_back(it->second);
        }
        int ffff=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<=1)
            {
                ffff=1;
                break;
            }
        }
        if(c==s)
            cout << "YES"<< endl;
        else if(c==0)
        {
            int flag=0;
            for(int i=1;i<s-1;i++)
            {
                if(str[i]!=str[i+1] && str[i]!=str[i-1])
                {
                    flag = 1;
                    break;
                }
            }
            if(ffff==1)
                cout << "NO"<< endl;
            else if(flag==1)
                cout << "NO"<< endl;
            else
                cout <<"YES"<< endl;
        }
        else
        {
            if(ffff==1)
                cout << "NO"<<endl;
            else
                cout <<"YES"<< endl;
        }


   }
}
