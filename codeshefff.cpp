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
    int  t,x,z;
    cin >> t;
    vector<int>v;
    while(t--)
    {
        int c=0,k=0,ans=1;
        cin >> x;
        v.pb(0);
        for(int i=1;i<=x;i++)
        {
            cin >>z;
            v.pb(z);
        }
        int ch = v[1];
        for(int i=2;i<=x;i++)
        {
            if(i<=5)
            {
                if(ch>v[i])
                {
                    ans++;
                }
            }
            if(i>=6)
            {
                int kk=0,l,c=0;
                k++;
                for(int j=k;;j++)
                {
                    if(kk==5)
                        break;
                    if(v[i]>v[j])
                        break;
                    else
                        c++;
                    kk++;
                }
                if(c==5)
                   ans++;
            }
        }
        cout << ans <<endl;
        v.clear();
    }
}
