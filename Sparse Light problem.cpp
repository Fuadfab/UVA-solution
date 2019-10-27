#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int d,m,y,a;
    char c;
    for(int i=0;i<x;i++)
    {
        cin >> d >> c >>m >> c>> y;
        cout << endl;
        cin >> a;
        int nd=d,nm=m,ny=y;
        while(a!=0)
        {
            if(nm==1 || nm==3 || nm==5|| nm==7 || nm==8 || nm==10 || nm==12)
            {
                if(nm==12 && nd ==31)
                {
                    ny++;
                    nm=0;
                }
                if(nd==31)
                {
                    nm++;
                    nd=0;
                }
            }
            if(nm == 4||nm == 6||nm == 9||nm == 11)
            {
                if(nd==30)
                {
                    nm++;
                    nd=0;
                }
            }
            if(nm==2)
            {
                int lyear=0;
                if(((ny % 4 == 0) && (ny % 100 != 0)) || (ny % 400 == 0))
                {
                    lyear = 1;
                    if(nd==29)
                    {
                        nm++;
                        nd=0;
                    }
                }
                else if(nd==28 && lyear!=1)
                {
                    nm++;
                    nd=0;
                }
            }
            nd++;
            a--;
        }
        cout << nd <<"-" <<nm<<"-"<<ny << endl;
    }
}
