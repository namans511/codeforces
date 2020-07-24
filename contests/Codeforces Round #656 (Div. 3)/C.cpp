#include <bits/stdc++.h>
//#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
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
		int n ;
		cin>>n;
		int a[n];
		int c=0;
		int f=1;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		if(n==1) {
			cout<<0<<"\n";
			continue;
		}
		int i;
		for (i = n-1; i > 0; --i)
		{
			if(f==1) {
				if(a[i]>a[i-1]) {
					f=0;
				}
			}
			else {
				if(a[i]<a[i-1])
					break;
			}
		}
		cout<<i<<"\n";
	}
	return 0;
}