//#include <bits/stdc++.h>
#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define ll long long
#define M 1000000007
#define elif else if
using namespace std;

ll lt(ll a, ll b) {
	ll c=0;
	while(a<b) {
		a=a<<1;
		c++;
	}
	if(a!=b) 
		return -1;
	ll x= c/3;
	c=c%3;
	x+=c/2;
	c=c%2;
	x+=c;
	return x;
}

ll rt(ll a, ll b) {
	ll c=0;
	while(a>b) {
		if(a%2==1) {
			return -1;
		}
		a=a>>1;
		c++;
	}
	if(a!=b) 
		return -1;
	ll x= c/3;
	c=c%3;
	x+=c/2;
	c=c%2;
	x+=c;
	return x;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
		ll a,b;
		cin>>a>>b;
		if(a==b) {
			cout<<"0\n";
		}
		elif(a<b) {
			ll x=lt(a,b);
			cout<<x<<"\n";
		}
		else {
			ll x=rt(a,b);
			cout<<x<<"\n";
		}
		
	}
	return 0;
}