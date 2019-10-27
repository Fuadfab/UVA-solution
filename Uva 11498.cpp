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
    int t,n,m,x,y;
    while(cin >> t)
    {
        if(t==0)
            break;
        cin >> n >> m;
        for(int i=0;i<t;i++)
        {
            cin >> x>>y;
            if(x>n && y>m)
                cout <<"NE"<<endl;
            else if(x==n || y==m)
                cout << "divisa"<< endl;
            else if(x<n && y>m)
                cout <<"NO"<< endl;
            else if(x<n && y<m)
                cout <<"SO"<< endl;
            else
                cout << "SE"<< endl;
        }
    }
}
