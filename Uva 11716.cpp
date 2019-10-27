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
    int t;
    cin >>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,str);
        int l = str.size();
        int s = sqrt(l);
        if(s*s==l)
        {
            for(int i=0;i<s;i++)
            {
                for(int j=i;j<l;j+=s)
                {
                    cout << str[j];
                }
            }
            cout << endl;
        }
        else
            cout <<"INVALID"<<endl;
    }
}
