#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0)
           break;
        cout << 1+(n*(n+1)/2) << endl;
    }
}


