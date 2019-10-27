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
    string str;
    while(getline(cin,str))
    {
        if(str=="DONE")
            break;
        vector<char>c,c1;
        int l = str.size();
        int j=0;
        for(int i=0;i<l;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                str[i]+=32;
            if(str[i]=='!' || str[i]==',' || str[i]=='.'|| str[i]==' ' || str[i]=='?')
               continue;
            else
                c.pb(str[i]);
        }
        c1 = c;
        for(int i=c.size()-1;i>=0;i--)
        {
           c[j]=c1[i];
           j++;
        }
        if(c1==c)
            cout <<"You won't be eaten!"<< endl;
        else
            cout <<"Uh oh.."<< endl;
        c.clear();
        c1.clear();
    }
}
