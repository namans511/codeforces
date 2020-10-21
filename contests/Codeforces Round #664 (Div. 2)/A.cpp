#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define F first
#define S second
#define pb push_back
using namespace std;

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int main()
{
	startTime = clock();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	freopen("error.txt", "w", stderr); 
#endif 
	int T;
	cin >> T;
	while(T--) {
		int r,g,b,w;
		cin>>r>>g>>b>>w;
		if(!(r && g && w && b)) {
			cout<<"No\n";
			continue;
		}
		int c=0;
		if(r&1) c++;
		if(g&1) c++;
		if(b&1) c++;
		if(w&1) c++;
		if(c==1) cout<<"Yes\n";
		else {
			c=0;
			r--;
			g--;
			b--;
			w+=3;
			if(r&1) c++;
			if(g&1) c++;
			if(b&1) c++;
			if(w&1) c++;
			if(c==1) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	cerr<<getCurrentTime();
	return 0;
}