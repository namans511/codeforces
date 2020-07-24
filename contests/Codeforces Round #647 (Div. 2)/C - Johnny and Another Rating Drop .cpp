//#include <bits/stdc++.h>
#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
#define ll long long
#define M 1000000007
using namespace std;

ll lt(ll a, ll b) {
	ll c=0;
	while(a!=b) {
		a=a<<1;
		c++;
	}
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
	ll x=lt(1001,1100611139403776);
	cout<<x;
	return 0;
}