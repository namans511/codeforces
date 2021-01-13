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
#define mi std::map<int, int> map;
#define ml std::map<ll, ll> map;
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
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
		int n;
		string s;
		cin>>n>>s;
		string a= s.substr(0,4);
		string b="";
		if(n>=8) b= s.substr(n-4,4);
		else if(n>4) b=s.substr(4,n-4);
		// deb2(a,b);
		string x=a+b;

		int cc = x.find("2020");
		if(cc != string::npos && (cc==0 || x.length()-cc==4)) {
			cout<<"YES\n";
			continue;
		}

		int bl=b.length();
		// deb(bl);
		string q="2020";
		int flag=0;
		// string xx=a.substr(0,2)+b.substr(bl-2,2);
		// deb(xx);
		if(a==q || b==q) flag=1;
		else if(bl>0 && a.substr(0,3)+b.substr(bl-1,1)==q) flag=1;
		else if(bl>1 && a.substr(0,2)+b.substr(bl-2,2)==q) flag=1;
		else if(bl>2 && a.substr(0,1)+b.substr(bl-3,3)==q) flag=1;
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";

		// int qi=0;
		// for (int i = 0; i < x.length(); ++i)
		// {
		// 	if(q[qi]==x[i]) qi++;
		// 	if(qi==4) {
		// 		if(i==x.length()-1) flag=1;
		// 		break;
		// 	}
		// }
		// for (int i = 0; i < x.length; ++i)
		// {
			
		// deb2(a,b);
		// deb(x);
		// int i = x.find("2020");
		// if(i == string::npos) cout<<"NO\n";
		// else cout<<"YES\n";
	}
	cerr<<getCurrentTime();
	return 0;
}