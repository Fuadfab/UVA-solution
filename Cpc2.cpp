#include<bits/stdc++.h>
using namespace std;

int main()
{
   int x;
   cin >> x;
   int z,y;
   string str;
   vector<int>m,r;
   vector<string>n;
   for(int i=0;i<x;i++)
   {
       cin >> z >> str>>y;
       r.push_back(z);
       n.push_back(str);
       m.push_back(y);
   }
   vector<int>s;
   for(int i=0;i<m.size()-1;i++)
   {
       for(int j=i+1;j<m.size();j++)
       {
           if(m[i]==m[j])
               s.push_back(j);
           if(m[i]<m[j])
           {
               int temp = m[i];
               m[i] =m[j];
               m[j] = temp;
               int t = r[i];
               r[i] =r[j];
               r[j] = t;
               string str2 = n[i];
               n[i] = n[j];
               n[j] = str2;
           }
       }
   }
   vector<bool>ss(m.size()-1,false);
   for(int i=0;m.size();i++)
   {
       if(m[i]==m[i+1])
       {
           ss[i] = true;
       }
   }


   for(int i=0;i<m.size();i++)
   {
        cout << ss[i] << endl;
        cout << r[i] <<" "<< n[i] <<" "<<m[i] << endl;
   }
}

