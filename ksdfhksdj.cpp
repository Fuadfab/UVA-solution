#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(cin >> a >> b >> c)
    {
        if(a==b==c)
            cout << "1" << endl;
        else if(a!=b && b!=c && c!=a)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
}
