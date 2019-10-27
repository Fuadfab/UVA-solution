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
    int t;
    cin >>t;
    int x1,x2,x3,x4,y1,y2,y3,y4;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int y = abs(y1-y4);
        int x = abs(x1-x2);
        int xx = abs(x3-x4);
        int yy = abs(y2-y3);
        cout << x <<" "<< xx <<" "<<y<<" "<<yy << endl;
    }
}
