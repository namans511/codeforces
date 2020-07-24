#include <bits/stdc++.h>
//#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define ll long long
#define M 1000000007
using namespace std;

int sw(int x) {
	if(x==1) return 0;
	return 1;
}

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
			cin>>b[i];
		}
		int f=0;
		int f1=0;
		for (int i = 0; i < n-1; ++i)
		{
			if(a[i]>a[i+1]) f=1;
			if(b[i]!=b[i+1]) f1=1;
		}
		if(f==0) {
			cout<<"Yes\n";
			continue;
		}
		if(f1==0) {
			cout<<"No\n";
			continue;
		}
		cout<<"Yes\n";
		// int x=0;
		// while(x<n) {
		// 	f=0;
		// 	int y=0;
		// 	int z=0;
		// 	for (int i = x+1; i < n; ++i)
		// 	{
		// 		if(a[x]>a[i]) {
		// 			y=1;
		// 			if(b[x]!=b[i]) {
		// 				f=1;
		// 				int temp=a[x];
		// 				a[x]=a[i];
		// 				a[i]=temp;
		// 				b[x]=sw(b[x]);
		// 				b[i]=sw(b[i]);
		// 			}
		// 		}
		// 	}
		// 	if(y==1 && f==0) {
		// 		for (int i = 0; i < n; ++i)
		// 		{
		// 			if(a[x]==a[i]) {
		// 				y=1;
		// 				if(b[x]!=b[i]) {
		// 					z=1;
		// 					b[x]=sw(b[x]);
		// 					b[i]=sw(b[i]);
		// 					break;
		// 				}
		// 			}
		// 		}
		// 	}
		// 	if(y==0) x++;
		// }
	}
	return 0;
}