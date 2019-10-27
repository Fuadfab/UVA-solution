#include<bits/stdc++.h>

using namespace std;

vector<int>ans;
void fun(string str)
{
    int carry = 0;
    int len = str.length();
    vector<int>v;
    for(int i=0;i<len;i++)
    {
        int x = str[i] - '0';
        v.push_back(x);
    }
    if(ans.size()==0)
    {
        ans = v;
    }
    else
    {
        for(int i = v.size()-1;i >= 0; i--)
        {
            int rem = 0;
            int z = v[i] + ans[i];
            if(z >= 10 && carry == 0)
            {
                rem = z%10;
                carry = z/10;
                ans[i] = rem;
            }
            else if(z <= 9 && carry == 0)
            {
                ans[i] = z;
            }
            else if(z <= 8 && carry >= 1)
            {
                ans[i] = carry+z;
                carry = 0;
            }
            else if(z >= 9 && carry >= 1)
            {
                z = z + carry;
                carry = 0;
                rem = z%10;
                carry = z/10;
                ans[i] = rem;
            }
        }
        if(carry !=0 )
            cout << carry << endl;
    }
    v.clear();
}


int main()
{
    string str;

    while(cin >> str)
    {
        if(str[0]=='0')
            break;
        fun(str);
    }
    for(int i=0;i<ans.size();i++)
        cout << ans[i];
    cout << endl;
}
