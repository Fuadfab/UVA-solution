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
    double h,u,d,f;
    while(cin >>h>>u>>d>>f)
    {
        if(h==0)
            break;
        double ff = u*(f/100);
        double ih = 0.0;
        int day=0;
        while(1)
        {
            day++;
            if(u>0)
                ih+=u;
            u-=ff;
            if(ih>h)
                break;
            ih-=d;
            if(ih<0)
                break;
        }
        if(ih>=0)
            cout <<"success on day "<<day<<endl;
        else
            cout <<"failure on day "<<day<<endl;
    }
}
