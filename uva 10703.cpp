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
    int h,w,sub,k=0;
    int x1,y1,x2,y2;
    while(1)
    {
        cin >> h >> w >> sub;
        if(h==0 && w==0 && sub==0)
            break;
        int arr[h+1][w+1];
        for(int i=1;i<=h;i++)
        {
            for(int j=1;j<=w;j++)
                arr[i][j]=0;
        }
        for(int i=0;i<sub;i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if(x2>x1)
                swap(x1,x2);
            if(y2>y1)
                swap(y1,y2);
            for(int i=x2;i<=x1;i++)
            {
                for(int j=y2;j<=y1;j++)
                {
                    if(arr[i][j]==0)
                        arr[i][j]=1;
                }
            }
        }
        int ans=0;
        for(int i=1;i<=h;i++)
        {
            for(int j=1;j<=w;j++)
                if(arr[i][j]==0)
                    ans++;
        }
        if(ans==0)
            cout <<"There is no empty spots."<< endl;
        if(ans==1)
            cout <<"There is one empty spots."<< endl;
        else
            cout <<"There are "<< ans <<" empty spots."<< endl;
    }
}
