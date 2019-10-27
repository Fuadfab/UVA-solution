#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    vector<int>v;
    while(cin>> n)
    {
        if(n==0)
            break;
        if(x==0)
            cout <<"PERFECTION OUTPUT" << endl;
        x=1;

        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
                v.push_back(i);
        }
        int sum = 0;
        for(int i=0;i<v.size();i++)
            sum+=v[i];

        if(sum==n)
           cout <<setw(5)<< n << "  PERFECT" <<endl;
        if(sum<n)
            cout <<setw(5)<<n <<"  DEFICIENT" << endl;
        if(sum>n)
            cout <<setw(5)<<n <<"  ABUNDANT" << endl;
        v.clear();
    }
    cout << "END OF OUTPUT" <<endl;
}
