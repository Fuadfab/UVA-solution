#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int x,y;
    cin >> t;
    for(int aa=1;aa<=t;aa++)
    {
        cin >> x>> y;
        for(int i=1;i<=y;i++)
        {
            for(int j=1;j<=x;j++)
            {
                for(int k=1;k<=j;k++)
                {
                     cout << j;
                }
                cout<< endl;
            }
            for(int g=x-1;g>=1;g--)
            {
                for(int k=1;k<=g;k++)
                {
                     cout << g;
                }
                if(aa==t && i==y && g==1)
                    break;
               cout << endl;
            }
            cout << endl;
        }
    }
}
