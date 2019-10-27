#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define INF INT_MIN
int arr[100+1][100+1];
void printVector(vector<int>v)
{
    for(int i=0;i<v.size();i++)
        cout << v[i] <<" ";
    cout << endl;
}
void reset(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            arr[i][j] = INF;
        arr[i][i]=0;
    }
}
int main()
{
    int x,y;
    while(cin >> x >> y)
    {
        int a,b,c,s,d,ca;
        reset(x);
        for(int i=1;i<=y;i++)
        {
            cin >> a >> b>>c;
            arr[a][b]=arr[b][c]=c-1;
        }
        cin >> s>>b>>ca;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=x;j++)
                cout << arr[i][j]<<" ";
            cout << endl;
        }

    }
}
