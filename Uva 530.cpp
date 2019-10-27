#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    unsigned long long int ans;
    while(cin >> n>>k)
    {
        if(n==0 & k==0)
            break;
        ans = 1;
		if (k > (n / 2))
			k = n - k;

		for (int i = 0; i < k; i++)
        {
			ans *= (n - i);
			ans /= (1 + i);
		}
		cout<< ans << endl;
    }
}
