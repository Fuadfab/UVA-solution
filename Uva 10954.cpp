#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int main()
{
    int x,y;
    while(cin >>x)
    {
        if(x==0)
            break;
        priority_queue<int,vector<int>,greater<int>>q;
        while(x--)
        {
            cin >>y;
            q.push(y);
        }
        int t=0,c=0;
        while(q.size()>1)
        {
            t = q.top();
            q.pop();
            t += q.top();
			q.pop();
			c+=t;
			q.push(t);
        }
        cout << c << endl;

    }
}
