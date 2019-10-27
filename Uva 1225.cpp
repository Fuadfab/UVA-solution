#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int ans[10]={0};
        for(int i=1;i<=n;i++)
        {
            int tem = i;
            while(tem!=0)
            {
                ans[tem%10]++;
                tem/=10;
            }
        }
        for(int i=0;i<=9;i++)
        {
            cout << ans[i];
            if(i<9)cout << " ";
        }
        cout << endl;
    }
}
