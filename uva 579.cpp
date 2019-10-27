#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int h,m;
    char c;
    while(1)
    {
        double i,j,t;
        cin >> h;
        cout <<":";
        cin >> m;
        if(h==0 && m==0)
            break;
        i=((h*30)+(m/2));
        j=(m*6);

        t=i-j;

        if(t<0)
            t*=-1;

        if(t>180)
            t=360-t;
        cout << std::fixed << setprecision(3)<< t << endl;

    }
}
