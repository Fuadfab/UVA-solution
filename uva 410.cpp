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
    int x,y,z,ff=1;
    vector<ll>v,n,n2;
    map<int,int>m;
    while(cin >> x>>y)
    {
        int p=0,k=0;
        double sum =0.00000;
        for(ll i=0;i<y;i++)
        {
            cin >> z;
            v.push_back(z);
            p+=z;
        }
        n = v;
        double av =(double)((double)p/(double)x);
        cout <<"Set #"<<ff <<endl;
        ff++;
        if(y<=x)
        {
            for(ll i=0;i<x;i++)
            {
                if(v.size()-1>=i)
                {
                     cout<<" "<<k<<": "<<v[i] << endl;
                     k++;
                     if(v[i]>av)
                        sum+=(v[i]-av);
                     else
                        sum+=(av-v[i]);
                }
                else
                {
                    cout << " "<<k<<": "<< endl;
                    sum+=av;
                    k++;
                }
            }
        }
        else if((y-x)==1&& x>=2)
        {
            sort(v.begin(),v.end());
            if((y-x)==1)
            {
                int  flag = 0;
                for(ll i=0;i<v.size();i++)
                {
                    if((v[0]==n[i] || v[1]==n[i]) && flag==0)
                    {
                        if(v[0]==n[i])
                        {
                          cout<<" "<<k <<": "<< v[0] << " "<< v[1]<< endl;
                          flag =1;
                        }
                        else
                        {
                            cout<<" "<<k <<": "<< v[1] << " "<< v[0]<< endl;
                            flag =1;
                        }
                        k++;
                        double kk = v[0]+v[1];
                        if(kk>av)
                            sum +=(kk-av);
                        else
                            sum+=(av-kk);
                    }
                    else
                    {
                        if(v[1]==n[i] || v[0]==n[i])
                            continue;
                        else{
                        cout<<" "<<k<<": "<<n[i] << endl;
                        if(n[i]>av)
                            sum+=(n[i]-av);
                        else
                            sum+=(av-n[i]);
                        k++;
                        }
                    }
                }
            }
        }
        else if((y-x)==2)
        {
            sort(v.begin(),v.end());
            if((y-x)==2)
            {
                int flag = 0,flag2=0;
                for(ll i=0;i<v.size();i++)
                {
                    if(((v[0]==n[i] ||v[3]==n[i]) && flag==0)|| (v[1]==n[i]||v[2]==n[i]) && flag2==0)
                    {
                        if(v[0]==n[i] || v[3]==n[i])
                        {
                            if(v[0]==n[i])
                            {
                                cout<<" "<<k <<": "<< v[0] << " "<< v[3]<< endl;
                                flag=1;
                            }
                            else
                            {
                                cout<<" "<<k <<": "<< v[3] << " "<< v[0]<< endl;
                                flag=1;
                            }
                            k++;
                            double kk = v[0]+v[3];
                            if(kk>av)
                                sum +=(kk-av);
                            else
                               sum+=(av-kk);
                        }
                        else if(v[1]==n[i] || v[2]==n[i])
                        {
                            if(v[1]==n[i])
                            {
                                 cout<<" "<<k <<": "<< v[1] << " "<< v[2]<< endl;
                                 flag2 = 1;
                            }
                            else
                            {
                                cout<<" "<<k <<": "<< v[2] << " "<< v[1]<< endl;
                                flag2 = 1;
                            }
                            k++;
                            double kk = v[1]+v[2];
                            if(kk>av)
                                sum +=(kk-av);
                            else
                               sum+=(av-kk);
                        }
                    }
                    else
                    {
                        if(v[3]==n[i] || v[2]==n[i]|| v[0]==n[i] || v[1]==n[i])
                            continue;
                        else{
                        cout<<" "<<k<<": "<<n[i] << endl;
                        if(n[i]>av)
                            sum+=(n[i]-av);
                        else
                            sum+=(av-n[i]);
                        k++;
                        }
                    }
                }
            }
        }
        else
        {
            sort(v.begin(),v.end());
            if(y%2==1)
            {
                ll j = v.size()-2;
                for(ll i=0;i<=v.size()/2-1;i++)
                {
                    m[v[i]] = v[j];
                    j--;
                }
            }
            else
            {
                ll j = v.size()-1;
                for(ll i=0;i<=v.size()/2-1;i++)
                {
                    m[v[i]]=v[j];
                    j--;
                }
            }
            map<int,int>::iterator it;
            for(int i=0;i<v.size();i++)
            {
                if(y%2==1)
                {
                    if(n[i]==v[v.size()-1])
                    {
                        cout<<" "<<k<<": "<<v[v.size()-1] << endl;
                        double a = v[v.size()-1];
                        if(a>av)
                            sum +=(a-av);
                        else
                            sum+=(av-a);
                        k++;
                    }
                }
                for(it = m.begin(); it != m.end(); ++it)
                {
                    double as=0;
                    if(n[i]==it->first)
                    {
                        cout<<" "<<k<<": "<<it->first << " "<< it->second << '\n';
                        as = it->first+it->second;
                        if(as>av)
                            sum +=(as-av);
                        else
                            sum+=(av-as);
                        ++k;
                        for(int i=0;i<v.size();i++)
                        {
                            if(n[i]==it->second)
                                n[i]=0;
                        }
                    }
                    if(n[i]==it->second)
                    {
                        cout<<" "<<k<<": "<<it->second << " "<< it->first << '\n';
                        as = it->first+it->second;
                        if(as>av)
                            sum +=(as-av);
                        else
                            sum+=(av-as);
                        ++k;
                        ++i;
                        for(int i=0;i<v.size();i++)
                        {
                            if(n[i]==it->first)
                                n[i]=0;
                        }
                    }
                }
            }
        }
        std::cout << std::fixed;
        cout <<"IMBALANCE = "<< std::setprecision(5)<< (double)sum << endl<<endl;
        v.clear();
        m.clear();
        n.clear();
    }
}
