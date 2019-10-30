#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back

vector<vector<char>>g;
vector<char>ans;
vector<bool>v;
int x=0;
void dfs(char c,int k)
{
    v[k]=true;
    ans.pb(c);
    for(auto i=g[k].begin();i!=g[k].end();i++)
    {
        char c = *i;
        x=c-'0';
        x-=17;
        if(v[x]==false)
            dfs(c,x);
    }
}
int main()
{
    int t,flag=0;
    cin>>t;
    cout <<endl<<endl;
    string s;
    char y,z;
    for(int i=0;i<t;i++)
    {
        getline(cin,s);
        char c=s[0];
        x=s[0]-'A'+1;
        g.assign(x+1,vector<char>());
        v.assign(x+1,false);
        while(1)
        {
            if(!getline(cin,s) || s.empty()) break;
            y=s[0]; z=s[1];
            int xx,yy;
            xx = y-'0';
            xx-=17;
            yy = z-'0';
            yy-=17;
            g[xx].pb(z);
            g[yy].pb(y);
        }
        int kk=0;
        int kkk=0;
        for(char i='A';i<=c;i++)
        {
            if(v[kk]==false)
            {
                 ++kkk;
                 dfs(i,kk);
            }
            ++kk;
        }
        x=0;
        cout << kkk<< endl;
        v.clear();
        g.clear();
        ans.clear();
    }
}
