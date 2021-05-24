#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int t,n,a[N],b[N];
int main()
{
	cin >>t ;
	while(t--)
	{
		int num=0;
		cin >> n;
		for(int i=1;i<=n;++i)cin >> a[i];
		for(int i=1;i<=n;++i)
		{
			cin >> b[i] ; b[i]-=a[i];
			if(b[i]<0)num+=100;
			if(b[i]>0&&b[i]!=b[i-1])num++;
		}
		puts(num>=2?"NO":"YES");
	}
	return 0;
} 
