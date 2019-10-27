#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    vector<int> cou;
    for(int i=1;i<=t;i++)
    {
        cin >> str;
        int len = str.length();
        for(int j=1;j<=len;j++)
        {
            string sum ="";
            string sub = str.substr(0,j);
            int sublen =sub.length();
            for(int k=0;k<len/sublen;k++)
                sum+=sub;
            if(sum==str)
            {
                cout << sublen <<endl;
                break;
            }
        }
        if(i!=t)
            cout << endl;
    }
}
