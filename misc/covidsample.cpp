#include "/Users/namansrivastava/Downloads/lol/stdc++.h"
//#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pb push_back
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
		int n,p;
		cin>>n>>p;
		int a[n][n];
		int p[n][n];
		int x;
		for (int i = 0; i < 1; i++) {
			int index=0;
		    for(int j = 0; j < n; j++) {
		    	if(j!=n-1) {
		        	cout<<1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+2<<endl;
		            cin>>x;
		            if(x==-1) return -1;
			        if(x==2) {
			        	a[i][j]=1;
			        	a[i][j+1]=1;
			        	int c=0;
			        	for (int k = j-1; k >= index; --k)
			        	{
			        		a[i][k]=c%2;
			        		c++;
			        	}
			        	j++;
			        	index=j+1;
			        }
			        if(x==0) {
			        	a[i][j]=0;
			        	a[i][j+1]=0;
			        	int c=1;
			        	for (int k = j-1; k >= index; --k)
			        	{
			        		a[i][k]=c%2;
			        		c++;
			        	}
			        	j++;
			        	index=j+1;
			        }
		    	}
		    	else {
		    		if(index==n) break;
		        	cout<<1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
		        	cin>>x;
		        	if(x==1) {
		        		a[i][j]=1;
		        		int c=0;
			        	for (int k = j-1; k >= index; --k)
			        	{
			        		a[i][k]=c%2;
			        		c++;
			        	}
		        	}
		        	if(x==0) {
		        		a[i][j]=0;
		        		int c=1;
			        	for (int k = j-1; k >= index; --k)
			        	{
			        		a[i][k]=c%2;
			        		c++;
			        	}
		        	}
		    	} 
		    }
		}
		int c=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[0][i]==1) c++;
			p[0][j]=c;
		}

		for(int i=1;i<n;i++) {
			c=0;
			for(int j=0;j<n;j++) {
				cout<<1<<" "<<1<<" "<<1<<" "<<i+1<<" "<<j+1<<endl;
		        cin>>x;
		        if(x==-1) return -1;
		        p[i][j]=x;
		        if((p[i-1][j]+c)!=x) {
		        	a[i][j]=1;
		        	c++;
		        }
		        else {
		        	a[i][j]=0;
		        }
			}
		}

		cout<<2<<endl;
		for (int i = 0; i < n; i++) {
		    for(int j = 0; j < n; j++) {
		        cout<<a[i][j]<<" ";
		    }
		    cout<<endl;
		}
		cin>>x;
		if(x==-1) return -1;
	}
	return 0;
}