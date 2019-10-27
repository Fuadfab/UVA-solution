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
    char arr[3][3];
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        if(i!=0)
            cout <<endl;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin >> arr[i][j];
        int x=0,o=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[i][j]=='X')
                    x++;
                if(arr[i][j]=='O')
                    o++;
            }
        }
        cout << x <<endl;
        cout <<o<<endl;
    }
}
