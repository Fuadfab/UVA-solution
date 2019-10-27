#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b && b==c)
            cout << "Equilateral Triangle" << endl;
        else if((a==b && b!=c) ||(a==c && a!=b) || (b==c && a!=b))
             cout << "Isosceles Triangle" << endl;
        else
            cout << "Bad Triangle" << endl;
    }
}
