#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int main()
{
    string str;
    string str2;
    while(cin >> str >> str2)
    {
        int c=0,sum=0,sum1=0;
        char ch,en;
        int len = str.size();
        int le = str2.size();
        for(int i=0;i<len;i++)
        {
            c=0;
            if(str[i]>='a' && str[i]<='z')
            {
                ch='a';en='z';
            }
            else
            {
                ch='A';en='Z';
            }
            for(char x=ch;x<=en;x++)
            {
                c++;
                if(str[i]==x)
                {
                    sum+=c;
                }
            }
        }
        for(int i=0;i<le;i++)
        {
            c=0;
            if(str2[i]>='a' && str2[i]<='z')
            {
                ch='a';en='z';
            }
            else
            {
                ch='A';en='Z';
            }
            for(char x=ch;x<=en;x++)
            {
                c++;
                if(str2[i]==x)
                {
                    sum1+=c;
                }
            }
        }
        cout << sum <<" "<<sum1<< endl;
        int n1=0,n2=0;
        while(sum!=0)
        {
            int mod =sum%10;
            n1+=mod;
            sum/=10;
        }
        while(sum1!=0)
        {
            int mod =sum1%10;
            n2+=mod;
            sum1/=10;
        }
        cout << n1 <<" "<<n2<< endl;
        if(n1>n2)
            swap(n1,n2);
        cout << std::fixed<< setprecision(2)<<((double(n1)/double(n2))*100) <<"%"<< endl;
    }
}
