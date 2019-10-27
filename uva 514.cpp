#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(;;)
    {
        if(t == 0)
            break;
        vector<int>v;
        int flag = 0;
        int k[t];
        for(int i=0;i<t;i++)
        {
            cin >> k[i];
            if(k[i]==0)
            {
                flag = 1;
                break;
            }
        }
        for(int i=1;i<=t;i++)
        {
            v.push_back(i);
        }
        if(flag==1)
        {
            cout << endl;
            break;
        }
        stack<int> st;
        int c = 0;
        int s = v.size();
        for(int i=0;i<t;i++)
        {
            for(int j=0;j<s;j++)
            {
                if(k[i]==v[j])
                {
                    v[j]=-1;
                    c++;
                    break;
                }
                else if(k[i]!=v[j])
                {
                    if(st.size() == 0 || st.top() != k[i])
                    {
                        if(v[j]!=-1)
                        {
                            st.push(v[j]);
                            cout << st.top() << endl;
                            v[j]= -1;
                            c++;
                        }
                    }
                    else if(st.top()==k[i])
                    {
                        st.pop();
                        break;
                    }
                }
                else
                    c++;
            }
            if(c>t)
                break;
        }
        v.clear();
        if(!st.empty())
        {
            cout<< "No"<<endl;
        }
        else
        {
            cout <<"Yes"<<endl;
        }
    }
}
