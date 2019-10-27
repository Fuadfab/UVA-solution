#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
vector<int> v;
void fun()
{
    for(int i=1201;i<100000;i++)
    {
        bool arr[10]={false};
        int x=i;
        int flag = 0;
        while(1)
        {
            if(x==0)
                break;
            int mod = x%10;
            if(i<=9999)
            {
                if(mod==0)
                {
                    flag=1;
                    break;
                }
            }
            if(arr[mod]==false)
                arr[mod]=true;
            else
            {
                 flag = 1;
                 break;
            }
            x/=10;
        }
        if(flag==0)
            v.pb(i);
    }
}

int main()
{
    fun();
    int mid = v.size()/2;
    ll x;
    while(cin >> x)
    {
        int a=0,b=0,c=0,d=0,j=0;
        for()
        cout << a <<" "<<b<<" "<<c<<" " <<d << endl;
    }
}
