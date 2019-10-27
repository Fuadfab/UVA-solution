#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        ostringstream ans;
        cin >> a >> b;
        int sum =0;
        sum = a+b;
        ans << sum;
        string str = ans.str();
        int len =str.length();
        int s = 0;
        for(int i=0;i<len;i++)
        {
            if(str[i]=='0' ||str[i]=='6' || str[i]=='9')
                s+=6;
            if(str[i]=='1')
                s+=2;
            if(str[i]=='2'|| str[i]=='3'||str[i]=='5')
                s+=5;
            if(str[i]=='4')
                s+=4;
            if(str[i]=='7')
                s+=3;
            if(str[i]=='8')
                s+=7;
        }
        cout << s << endl;
    }
}
