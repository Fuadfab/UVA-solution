#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2,l1,l2;
    vector<char>v;
    while(cin >> str >> str2)
    {
        int l,ll;
        l = str.length();
        ll = str2.length();
        if(ll>l)
        {
            string c;
            c = str2;
            str2 = str;
            str = c;
        }
        l1 = str.length();
        l2 = str2.length();
        int j=l2;
        int ca=0,x,sum,mod;
        for(int i=l2;i>=0;i--)
        {
            int y = str2[i]-'0';
            for(int j=l1;i>=0;j--)
            {
                x = str[i]-'0';
                sum = x*y;
                if(sum>=10)
                {
                    mod =
                }
            }
        }
    }
}
