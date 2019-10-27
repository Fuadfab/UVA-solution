#include<bits/stdc++.h>

using namespace std;

void func(float coin[],float x,int len)
{
    int c = 0;
    for(int i=0;i<len;i++)
    {
        if(x >= coin[i])
        {
            if(x%coin[i] == 0)
            {
                 c += 1;
            }
        }
    }
    cout << c << endl;
}

int main()
{
    float coin[] = {10000,5000,2000,1000,500,200,100,50,20,10,5};
    int len = sizeof(coin)/ sizeof(coin[0]);
    float x;
    cin >> x;
    x = x * 1000;

    func(coin,x,len);

}
