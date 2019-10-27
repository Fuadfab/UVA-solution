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
    int a,b,c,t;
    cin >> t;
    while(t--)
    {
        cin >> a>>b>>c;
        if(b==0)
            cout <<"0"<< endl;
        else if(a==0 && c==0)
            cout << "0"<< endl;
        else
        {
            ll cc =0;
            while(1)
            {
                if(b==0)
                    break;
                if(b==1 && (c==1|| c==0))
                    break;
                if(a==0 &&(c==0 || c==1))
                   break;
                if(b>=1 && c>=2)
                {
                    b-=1;
                    cc+=1;
                    c-=2;
                    cc+=2;
                }
                if(b>=2 && (c==0|| c==1))
                {
                    if(a>=1 && b>=2)
                    {
                        a-=1;
                        cc+=1;
                        b-=2;
                        cc+=2;
                    }
                }
             }
             cout << cc << endl;
        }
    }
}
