#include<bits/stdc++.h>
using namespace std;
vector<int>grp[200];
stack<int> st;
map<int,int>ma;
long long int visted[100];
int n;

void topologicalsortUtial(int x)
{
    int u;
    ma[x]=1;
    int l=grp[x].size();
    for(int i=0;i<l;i++)
    {
        u = grp[x][i];
        if(!ma[u])
            topologicalsortUtial(u);
    }
    st.push(x);
    //cout << x << endl;
}

void topologicalsort()
{
    for(int i=1;i<=n;i++)
        visted[i]=0;
    for(int i=1;i<=n;i++)
        if(visted[i]==0)
            topologicalsortUtial(i);
    int c=0;
    while(st.empty()==0)
    {
        c++;
        cout<<st.top();
        if(c<n)
            cout<<" ";
        st.pop();
    }
    cout<<endl;


}
int main()
{
    int m,x,y;
    cin >> n >> m;
    while(cin >> n >> m)
    {
        if(n == 0 && m==0)
            break;
        for(int i=1; i<=m; i++)
        {
            cin>> x >> y;
            grp[x].push_back(y);

        }
        topologicalsort();
    }
}
