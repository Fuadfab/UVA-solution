#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll T; cin>>T;
    while(T--)
    {
         ll x,y; cin>>x>>y;
         x -= y;

        if(x!=1){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
