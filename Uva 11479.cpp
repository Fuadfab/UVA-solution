#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int x,a,b,c,ca=1;
    cin >> x;
    while(x--)
    {
        cin >> a >> b>> c;
        if((a+b)>c && (b+c)>a && (c+a)>b)
        {
            if(a==b && b==c)
            {
                cout <<"Case "<<ca<<": Equilateral"<< endl;
                ca++;
            }
            else if(a!=b && b!=c && c!=a)
            {
                cout <<"Case "<<ca<<": Scalene"<< endl;
                ca++;
            }
            else
            {
                cout <<"Case "<<ca<<": Isosceles"<<endl;
                ca++;
            }
        }
        else
        {
            cout <<"Case "<<ca<<": Invalid"<< endl;
            ++ca;
        }
    }

}
