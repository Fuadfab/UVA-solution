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
    int t,x;
    cin >> t;
    while(t--)
    {
        int sum = 0,c=0;
        cin >> x;
        int arr[x]={0};
        for(int i=0;i<x;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        int avg = sum/x;
        for(int i=0;i<x;i++)
        {
            if(arr[i]>avg)
                c++;
        }
        double avg2=(double)c/(double)x*100;
        cout << fixed;
        cout << setprecision(3)<< avg2 <<"%"<<endl;
    }
}
