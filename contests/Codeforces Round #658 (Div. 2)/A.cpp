#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
#define F first
#define S second
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif 
	int T;
	cin >> T;
	while(T--) {
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		map<int,int> mp1,mp2;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			mp1[a[i]]++;
		}
		for (int i = 0; i < m; ++i)
		{
			cin>>b[i];
			mp2[b[i]]++;
		}
		int flag =0 ;
		for(auto i : mp1) {
			if(i.S>0 && mp2[i.F]>0) {
				flag=1;
				cout<<"YES\n1 "<<i.F<<"\n";
				break;
			} 
		}
		if(flag==0)
			cout<<"NO\n";
	}
	return 0;
}