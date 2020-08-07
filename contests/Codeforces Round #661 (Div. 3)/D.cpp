#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pb push
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
		string s;
		cin>>s;
		stack<int> v0,v1;
		int c=1;
		int cx=1;
		a[0]=1;
		int f;
		int x,t;
		for (int i = 1; i < n; ++i)
		{
			x=(int)s[i]-48;
			if(x!=(int)s[i-1]-48) {
				a[i]=cx;
			}
			else {
				if(x) {
					v1.push(cx);
					if(v0.empty()) {
						c++;
						a[i]=c;
						cx=c;
					}
					else {
						t=v0.top();
						v0.pop();
						a[i]=t;
						cx=t;
					}
				}
				else {
					v0.push(cx);
					if(v1.empty()) {
						c++;
						a[i]=c;
						cx=c;
					}
					else {
						t=v1.top();
						v1.pop();
						a[i]=t;
						cx=t;
					}
				}
			}
		}
		cout<<c<<"\n";
		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}