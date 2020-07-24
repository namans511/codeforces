#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;

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
		int n;
		cin>>n;
		int a[n];
		vector<int> v;
		int f=0,ind=-1;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(i!=n-1 && a[i]==1) {
				f++;
				if(ind==-1)
					ind=i;
			}
			else if(f!=0) {
				if(f&1 && ind!=0)
					v.push_back(ind);
				ind=-1;
				f=0;
			}
		}
		int i=0,t=1;
		ind=0;
		v.push_back(-1);
		while(i<n) {
			if(a[i]==1 || i==n-1) a[i]=0;
			else if(i+1==v[ind]) {
				a[i]=0;
				ind++;
			}
			else a[i]=1;
			if(a[i]==0) i++;
			t=(t==1)?2:1;
		}
		if(t==1) cout<<"Second\n";
		else cout<<"First\n";
	}
	return 0;
}