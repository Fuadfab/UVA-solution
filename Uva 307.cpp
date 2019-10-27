#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(cin >> x)
    {
        if(x==0)
            break;
        int arr[x];
        for(int i=0;i<x;i++)
            cin >> arr[i];
        sort(arr,arr+x);
        int sum=0;
        for(int i=0;i<x;i++)
            sum+=arr[i];
        int kk=arr[x-1];
        cout <<" "<< sum << endl;
        for(int i = kk+1;i<=sum;i++)
        {
            if(sum%i==0)
            {
                cout <<i<< endl;
                break;
            }
        }
    }
}
