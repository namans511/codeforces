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
		int x,y,z;
		cin>>x>>y>>z;
		if(x==y) {
			if(y==z) {
				cout<<"YES\n";
				cout<<x<<" "<<y<<" "<<z<<"\n";
			}
			else {
				if(x>z) {
					cout<<"YES\n";
					cout<<x<<" "<<z<<" "<<1<<"\n";
				}
				else
					cout<<"NO\n";
			}
		}
		else if(y==z) {
			if(z>x) {
				cout<<"YES\n";
				cout<<x<<" "<<1<<" "<<z<<"\n";
			}
			else
				cout<<"NO\n";
		}
		else if(x==z) {
			if(z>y) {
				cout<<"YES\n";
				cout<<1<<" "<<z<<" "<<y<<"\n";
			}
			else
				cout<<"NO\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;
}