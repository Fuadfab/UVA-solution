#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,s,y;
    cin >> t;
    cin >> s;
    int arr[t+1][t+1]={0};
    while(cin >> x>>y)
    {
        if(x == 0 && y == 0)
            break;
        arr[x][y]=1;
        arr[y][x]=1;
    }
    for(int i=1;i<t+1;i++)
    {
        for(int j=1;j<t+1;j++)
            cout << arr[i][j];

        cout <<endl;
    }
}
