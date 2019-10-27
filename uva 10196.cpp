#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[8][8];
    while(1)
    {
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
                cin >> arr[i][j];
        }
        int c=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(arr[i][j]=='k')
                {
                    if(i==0)
                    {
                        if((arr[i][j+1]<='a'&& arr[i][j+1]>='z') &&((arr[i][j-1]<='a'&& arr[i][j-1]>='z')) &&
                           (arr[i+1][j]=='P'||arr[i+1][j]<='a' && arr[i+1][j]>='z') && (arr[i+1][j+1]=='P'||arr[i+1][j+1]<='a' && arr[i+1][j+1]>='z')
                           && (arr[i+1][j-1]=='P'||arr[i+1][j-1]<='a' && arr[i+1][j-1]>='z'))
                            c++;
                    }
                    if(i>=1)
                    {
                        if((arr[i][j+1]=='P'||arr[i][j+1]<='a' && arr[i][j+1]>='z') &&(arr[i][j-1]=='P'||arr[i][j-1]<='a' && arr[i][j-1]>='z')&&
                           (arr[i-1][j-1]<='a' && arr[i+1][j-1]>='z') && (arr[i+1][j-1]<='a' && arr[i-1][j-1]>='z')&&
                           (arr[i+1][j]=='P'||arr[i+1][j]<='a' && arr[i+1][j]>='z') && (arr[i+1][j+1]=='P'||arr[i+1][j+1]<='a' && arr[i+1][j+1]>='z')
                           && (arr[i+1][j-1]=='P'||arr[i+1][j-1]<='a' && arr[i+1][j-1]>='z'))
                            c++;
                    }
                }
            }
        }
    }

}
