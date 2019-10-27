#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
vector<char>ch;
vector<char>ans;
void fun(char c)
{
    if(c!='!')
        ch.push_back(c);
    else if(c=='!')
    {
        if(ch.size()==1)
        {
            if(ch[0]=='.')
                ans.pb('E');
            else
                ans.pb('T');
        }
        else if(ans.size()==2)
        {
            if(ch[0]=='.' && ch[1]=='-')
                ans.pb('A');
            if(ch[0]=='.' && ch[1]=='.')
                ans.pb('I');
            if(ch[0]=='-' && ch[1]=='-')
                ans.pb('M');
        }
        else if(ans.size()==3)
        {
            if(ch[0]=='-' && ch[1]=='.' && ch[2]=='.')
                ans.pb('D');
            if(ch[0]=='-' && ch[1]=='-' && ch[2]=='.')
                ans.pb('G');
            if(ch[0]=='-' && ch[1]=='.' && ch[2]=='-')
                ans.pb('K');
            if(ch[0]=='.' && ch[1]=='-' && ch[2]=='.')
                ans.pb('R');
            if(ch[0]=='.' && ch[1]=='.' && ch[2]=='-')
                ans.pb('U');
            if(ch[0]=='.' && ch[1]=='.' && ch[2]=='.')
                ans.pb('S');
            if(ch[0]=='.' && ch[1]=='-' && ch[2]=='-')
                ans.pb('W');
            if(ch[0]=='-' && ch[1]=='-' && ch[2]=='-')
                ans.pb('O');
        }
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        int l = str.size();
        cout << l<< endl;
        for(int i=0;i<l;i++)
        {
            if(str[i]==' ' && str[i+1]==' ')
                ans.pb(' ');
            else if(str[i]!=' ')
                fun(str[i]);
            else
            {
                fun('!');
                ch.clear();
            }
        }
        for(int i=0;i<ans.size();i++)
            cout << ans[i]<< endl;
        ans.clear();

    }
}
