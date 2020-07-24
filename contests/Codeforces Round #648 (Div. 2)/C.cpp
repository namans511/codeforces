//#include <bits/stdc++.h>
#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define ll long long
#define M 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin>>n;
		int a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>b[i];
		}
		int c=0;
		int cm=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]==b[i]) c++;
		}
		if(c>cm) cm=c;
		for (int i = 0; i < n; ++i)
		{
			
		}
	}
	return 0;
}