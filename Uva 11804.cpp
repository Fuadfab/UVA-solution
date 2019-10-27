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
    int t;
    cin >> t;
    int cas =1;
    while(t--)
    {
        int a[10];
        int d[10];
        string n[10];
        for(int i=0;i<10;i++)
            cin >> n[i]>>a[i]>>d[i];
        //for(int i=0;i<10;i++)
          //  cout<<n[i]<<" "<<a[i]<<" "<<d[i]<<endl;
        //cout << endl<<endl;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                    swap(d[i],d[j]);
                    swap(n[i],n[j]);
                }
            }
        }
        //for(int i=0;i<10;i++)
          //  cout<<n[i]<<" "<<a[i]<<" "<<d[i]<<endl;
        //cout <<endl;
        int p[10]={0};
        int c=0;
        for(int i=0;i<10;i++)
        {
           c=0;
           for(int j=0;j<10;j++)
           {
               if(a[i]==a[j])
               {
                   c++;
               }
           }
           if(c==1)
               p[i]=0;
           else
               p[i]=c;
        }
        //for(int i=0;i<10;i++)
          //  cout <<p[i]<<" ";
        //cout<<endl;
        for(int i=0;i<10;i++)
        {
            if(p[i]!=0)
            {
                int k=p[i];
                for(int l=i;l<(i+k);l++)
                {
                    for(int m=i;m<(i+k);m++)
                    {
                        if(d[l]<d[m])
                        {
                            swap(n[l],n[m]);
                            swap(a[l],a[m]);
                            swap(d[l],d[m]);
                        }
                        if(d[l]==d[m])
                        {
                            if(n[l]<n[m])
                            {
                                swap(n[l],n[m]);
                                swap(a[l],a[m]);
                                swap(d[l],d[m]);
                            }
                        }
                    }
                }
                i+=(k-1);
            }
        }
        //for(int i=0;i<10;i++)
          //  cout<<n[i]<<" "<<a[i]<<" "<<d[i]<<endl;
        set<string,less<string>>s,s1;
        for(int i=0;i<10;i++)
        {
            if(i<=4)
                s.insert(n[i]);
            else
                s1.insert(n[i]);
        }
        set<string,greater<string>>::iterator itr;
        int kk=0;
        cout << "Case "<<cas<<":"<< endl;
        cout << "(";
        for(itr = s.begin(); itr != s.end(); ++itr)
        {
            kk++;
            if(kk==5)
                cout<<*itr <<")";
            else
                cout <<*itr <<", ";
        }
        cout << endl;
        cout << "(";
        kk=0;
        for(itr = s1.begin(); itr != s1.end(); ++itr)
        {
            kk++;
            if(kk==5)
                cout<<*itr <<")";
            else
                cout <<*itr <<", ";
        }
        cout << endl;
        s.clear();
        s1.clear();
        cas++;
    }
}
