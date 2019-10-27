#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
vector<int> v1;
int fun(int x)
{
    if(v1.size()==0)
    {
        v1.pb(x);
        return 2;
    }
    else
    {
        int c=1;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]==x)
                c++;
        }
        v1.pb(x);
        if(c%2==0)
            return -2;
        else
            return 2;
    }
}
int main()
{
    ll n,m,c,x,y,ss=1;
    vector<ll>v,b;
    while(cin >> n >> m >> c)
    {
        if(n==0 && m==0 && c==0)
            break;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
        }
        for(int i=0;i<m;i++)
        {
            cin >> y;
            b.pb(y);
        }
        int sum =0,f=0,ans=0;
        for(int i=0;i<m;i++)
        {
            if(sum>c)
            {
                f=1;
                break;
            }
            //cout << sum << " "<< c << endl;
            int xx=fun(b[i]);
            if(xx==2)
                sum+=v[b[i]-1];
            else
                sum-=v[b[i]-1];
            if(sum>c)
            {
                f=1;
                break;
            }
            if(sum>ans)
                ans =sum;
        }
        cout << "Sequence "<<ss << endl;
        if(f==1)
            cout << "Fuse was blown."<< endl;
        else
        {
            cout <<"Fuse was not blown."<<endl;
            cout <<"Maximal power consumption was "<<ans<<" amperes."<<endl;
        }
        ss++;
        cout << endl;
        v.clear();
        b.clear();
        v1.clear();
    }
}
