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
		int l,r;
		cin>>l>>r;
		if(l*2>r)
			cout<<-1<<" "<<-1;
		else
			cout<<l<<" "<<2*l;
		cout<<"\n";
	}
	return 0;
}