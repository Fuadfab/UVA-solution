#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;

    while(cin >> x >> y)
    {
        if(x == 0 || y == 0)
            break;
        char arr[x][y];
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                cin >> arr[i][j];

        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                cout << arr[i][j];

    }
}
