#include<bits/stdc++.h>

using namespace std;

void func(int x,string str)
{
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='1')
        {
            for(int k=0;k<x*2;k++)
            {
                cout << "|"<< endl;
                if(k==x-1)
                    cout <<" "<<endl;

            }
        }
        else
        {
            for(int j = 0;j < x*2; j++)
            {
                cout <<"-";
            }
            cout << endl;
            if(str[i]=='0'|| str[i]=='5'||str[i]=='6'|| str[i]=='8'|| str[i]=='9')
            {
                for(int j = 0;j < x; j++)
                {
                    cout <<"|";
                    if(str[i]=='0'|| str[i]=='8' || str[i]=='9')
                    {
                         for(int f=0;f<x;f++)
                         {
                             cout <<" ";
                         }
                         cout << "|";
                    }
                    cout << endl;
                }
                if(str[i] != '0')
                {
                    for(int j = 0;j < x*2; j++)
                    {
                        cout <<"-";
                    }
                    cout << endl;
                }

            }

        }
    }
}

int main()
{
    int x;
    int n;
    ostringstream str1;

    while(cin >> x >> n)
    {
        if(x == 0 && n == 0)
            break;

        str1 << n;
        string str;

        str = str1.str();
        //cout << str << endl;

        func(x,str);

    }
}
