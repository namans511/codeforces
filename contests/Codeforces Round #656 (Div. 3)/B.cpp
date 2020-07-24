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
		int n;
		cin>>n;
		map<int,int> m;
		int a[2*n];
		for (int i = 0; i < 2*n; ++i)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		int ind=0;
		int x[n];
		for (int i = 0; i < 2*n; ++i)
		{
			if(m[a[i]]>0) {
				x[ind]=a[i];
				ind++;
				m[a[i]]-=2;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<x[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}