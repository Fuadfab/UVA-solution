#include<bits/stdc++.h>

using namespace std;

vector<int> ans;
vector<int> t;
int prime [] = {2,3,5,7,11,13,17,19,23,31,37,41};
int fun(int x)
{
    int sum = 1 + x;

    return sum;
}

int main()
{
   int t;
   while(cin >> t)
   {
        for(int i=2;i<t;i++)
        {
            for(int j=2;j<t;j++)
            {
                int x = fun(j);
            }
        }
   }
}
