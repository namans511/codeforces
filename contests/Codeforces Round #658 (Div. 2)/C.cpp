#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pb push_back
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
		int len;
		cin>>len;
		string a,b;
		cin>>a>>b;
		if(a==b) {
			cout<<"0\n";
			continue;
		}		
		int ind;
		for(int i = len-1; i>=0 ; i--) {
			if(a[i]!=b[i]) {
				ind=i;
				break;
			}
		}
		char ch=a[0];
		int x = (ch=='0')?0:1;
		std::vector<int> v;
		// v.push_back(ind);
		// v.push_back(-8);
		for (int i = 1; i<=ind; ++i)
		{
			if(ch!=a[i]) {
				v.push_back(i);
				x=!x;
				ch=a[i];
			}
		}
		// v.push_back(-9);
		// v.push_back(x);

		if(x!=(int)b[ind]-48) {
			// v.push_back(-6);
			v.push_back(ind+1);
			x=!x;
		}
		int c=0,l=ind+1;
		// v.push_back(-4);
		v.push_back(x);
		// v.push_back(-4);
		for(int i = ind; i>=0; i--) {
			if(x==(int)b[i]-48) {
				c++;
			}
			else {
				v.push_back(-5);
				// if(c==0) 
				// 	v.pb(1);

				// else
					v.push_back(c);
				v.push_back(l);
				x=!x;
				l=i+1;
				c=0;
			}
		}
		// if(c!=0 && ) {
		// 	v.push_back(-7);
		// 	v.push_back(c);
		// 	v.push_back(l);
		// }
		cout<<v.size();
		for(auto i : v) {
			cout<<" "<<i;
		}
		cout<<"\n";
	}
	return 0;
}