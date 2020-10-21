#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define vi std::vector<int>
#define vl std::vector<ll>
#define pi std::pair<int,int>
#define pl std::pair<ll,ll>
#define mi std::map<int, int>
#define ml std::map<ll, ll>
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deb3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << ","<< #z << "=" << z << endl
#define fo(i, n) for(int i=0; i<n; i++)
#define Fo(i, k, n) for(int i=k; i<k; i++)
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
		string s;
		cin>>s;
		mi m;
		int c=0;
		m[0]=0;
		for (int i = 0; i < s.length(); ++i) {
			if(s[i]=='1') c++;
			else {
				m[c]++;
				c=0;
			}
		}
		m[c]++;
		// int ss=0;
		// // for(auto i : m) {

		// // 	// ss*=(i.F);
		// // 	deb2(i.F,i.S);
		// // }
		// // // cout<<ss;
		


		auto itr=m.end();
		itr--;
		ll sa;
		sa=0;
		int f=0;
		do {
			if(f==0) sa+=(itr->F)*(ceil(itr->S/2.0));
			else sa+=(itr->F)*(floor(itr->S/2.0));
			if((itr->S)&1) f=!f;
			if(itr!=m.begin()) itr--;
		} while(itr!=m.begin());
		cout<<sa<<"\n";
	}
	cerr<<getCurrentTime();
	return 0;
}