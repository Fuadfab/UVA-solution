#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
void printVector(vector<int>v)
{
    for(int i=0;i<v.size();i++)
        cout << v[i] <<" ";
    cout << endl;
}

int main()
{
    string s,t;
    while(cin >> s)
    {
        int l,l2;
        cin >> t;
        l=t.size();
        l2 = s.size();
        int tt=0,co=0,flag=0;
        for(ll i=0;i<l2;i++)
        {
            char c=s[i];
            for(ll j=tt;j<l;j++)
            {
                if(c == t[j])
                {
                    tt=j+1;
                    co++;
                    break;
                }
            }
        }
        if(l2==co)
            cout <<"Yes"<<endl;
        else
            cout << "No"<< endl;
    }
}
