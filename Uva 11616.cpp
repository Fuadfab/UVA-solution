#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ar[]={'I','V','X','L','C','D','M'};
    int arr[]={1,5,10,50,100,500,1000};
    string str;
    while(cin >> str)
    {
        int l = str.size();
        int ans = 0;
        if(str[0]>='A' && str[0]<='Z')
        {
            int z=0,k=0;
            for(int i=0;i<l-1;i++)
            {
                int x=0,y=0;
                for(int j=0;j<7;j++)
                {
                    if(str[i] == ar[j])
                        x = arr[j];
                    if(str[i+1] == ar[j])
                        y = arr[j];
                    if(str[l-1] == ar[j] && l!=2)
                        z= arr[j];
                    if(str[l-2]==ar[j])
                        k=arr[j];
                }
                if(x<y)
                {
                    ans+=(y-x);
                    i++;
                }
                else if(l==2)
                {
                    ans+=(x+y);
                    i++;
                }
                else
                    ans+=x;
            }
            if(l==1)
            {
                for(int i=0;i<7;i++)
                    if(str[0]==ar[i])
                       ans = arr[i];
            }
            if(k<z)
                cout << ans << endl;
            else
                cout << ans+z << endl;
        }
        else
        {
            stringstream s(str);
            int f =0;
            s>>f;
            int x = f;
            while(1)
            {
                if(x==0)
                    break;
                if(x>=1000)
                {
                    cout << "M";
                    x-=1000;
                }
                else if(x>=900 && x<=999)
                {
                    cout <<"CM";
                    x-=900;
                }
                else if(x>=500)
                {
                    cout <<"D";
                    x-=500;
                }
                else if(x>=400 && x<=499)
                {
                    cout <<"CD";
                    x-=400;
                }
                else if(x>=100)
                {
                    cout <<"C";
                    x-=100;
                }
                else if(x>=90 && x<=99)
                {
                    cout <<"XC";
                    x-=90;
                }
                else if(x>=50)
                {
                    cout <<"L";
                    x-=50;
                }
                else if(x>=40 && x<=49)
                {
                    cout <<"XL";
                    x-=40;
                }
                else if(x>=10)
                {
                    cout <<"X";
                    x-=10;
                }
                else if(x==9)
                {
                    cout <<"IX";
                    x-=9;
                }
                else if(x>=5)
                {
                    cout <<"V";
                    x-=5;
                }
                else if(x==4)
                {
                    cout <<"IV";
                    x-=4;
                }
                else if(x>=1)
                {
                    cout <<"I";
                    --x;
                }
            }
            cout << endl;
        }
    }
}
