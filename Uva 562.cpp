#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin >> x;
        int arr[x];
        for(int i=0;i<x;i++)
            cin >> arr[i];

        sort(arr,arr+x);
    }
}
