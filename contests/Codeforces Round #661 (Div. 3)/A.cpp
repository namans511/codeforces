#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pb push_back
#define mp make_pair
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
	    int n;
	    cin>>n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int flag=1;
	    for (int i = 0; i < n-1; i++) {
	        if(a[i+1]-a[i]>=2) {
	            flag=0;
	            break;
	        }
	    }
	    if(flag)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}